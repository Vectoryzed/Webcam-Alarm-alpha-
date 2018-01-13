#define MAX_SENSIBILITY 5
#define SENSIBILITY_DIFF 5000

#include "stdafx.h"
#include "settings_data.h"

#include "settingsForm.h"

#include <vector>
#include <stdio.h>

#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace System;
using namespace System::Media;
using namespace System::Windows::Forms;

using namespace std;

bool intruderAlarm(cv::Mat& a, cv::Mat& b)
{
    // Sfochiamo le immagini per ridurre il rumore
	// e permettere una migliore analisi del primo piano
    cv::Mat a_blurred, b_blurred;
    cv::blur(a, a_blurred, cv::Size(3, 3));
    cv::blur(b, b_blurred, cv::Size(3, 3));
	// imshow("a_blurred", a_blurred);
	// imshow("b_blurred", b_blurred);

    // Costruiamo la matrice dei valori assoluti delle differenze
	// tra le due immagini sfocate
    cv::Mat c;
    cv::absdiff(b_blurred, a_blurred, c);
	// imshow("c", c);

    // Dividiamo l'immagine nei relativi canali
    std::vector<cv::Mat> channels;
    cv::split(c, channels);
	// imshow("channels[0]", channels[0]);
	// imshow("channels[1]", channels[1]);
	// imshow("channels[2]", channels[2]);

    // Applichiamo il threshold ad ogni canale, per poi combinare
	// il risultato di tale operazione con la matrice D
	// Facendo l'OR tra la threshold di ciascun canale e la D,
	// che inizialmente è una matrice di zeri,
	// verranno evidenziate le differenze (in bianco)
    cv::Mat d = cv::Mat::zeros(c.size( ), CV_8UC1);
    for (int i = 0; i < channels.size( ); i++)
    {
        cv::Mat thresh;
        cv::threshold(channels[i], thresh, 45, 255, CV_THRESH_BINARY);
        d |= thresh;
    }
	// imshow("d", d);

	cv::Mat kernel, e;

	// Riempiamo i buchi delle figure in movimento di bianco
	// In questo modo, diverranno visibili le sagome degli oggetti in movimento
	kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(1, 1));
    cv::morphologyEx(d, e, cv::MORPH_CLOSE, kernel, cv::Point(-1, -1), 5);
	// imshow("e", e);

    // Ricerca di tutti i contorni dell'oggetto rilevato in movimento
    std::vector<std::vector<cv::Point> > contours;
    cv::findContours(e.clone( ), contours, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_SIMPLE);

    // Selezione dei contorni più larghi
    std::vector<std::vector<cv::Point> > intruders;
    for (int i = 0; i < contours.size( ); i++) 
    {
		// Determino l'area dei contorni
        double area = cv::contourArea(contours[i]);

		// Se l'area rilevata è maggiore o uguale a SENSIBILITY_DIFF moltiplicato
		// per un coefficiente indicativo della sensibilità scelta, allora
		// inserisco l'oggetto rilevato nell'array intruders
        if (area >= ((MAX_SENSIBILITY - globalSettings.getSensibility( )) * SENSIBILITY_DIFF))
			intruders.push_back(contours[i]);
    }

	// Creazione di una maschera per evidenziare solo la figura rilevata in movimento
    cv::Mat mask;
	
	if (globalSettings.getIsWindowBVisible( ))
	{
		mask = cv::Mat::zeros(b.size( ), CV_8UC3);
		cv::drawContours(mask, intruders, -1, CV_RGB(255,255,255), -1);
		// imshow("mask", mask);
	}

    if (intruders.size( ))
    {
		// Modifica della finestra B in modo tale da poter visualizzare
		// lo sfondo più scuro e la sagoma dell'oggetto rilevato in movimento
		// più chiara

		// imshow("b/4", b/4);
		// imshow("b/4 & ~mask", b/4 & ~mask);
		// imshow("b & mask", b & mask);

		if (globalSettings.getIsWindowBVisible( ))
		{
			b = (b/4 & ~mask) + (b & mask);
			cv::drawContours(b, intruders, -1, CV_RGB(255,255,255), 2);
		}

		return true;
    }
	else
		return false;
}

void takePhoto(cv::Mat& picture, int index)
{
	vector<int> compression_params;
    compression_params.push_back(CV_IMWRITE_PNG_COMPRESSION);
    compression_params.push_back(9);

	imwrite("IMG_" + to_string(index) + ".PNG", picture, compression_params);
}

void playSound(SoundPlayer^ player)
{
	player->SoundLocation = gcnew String(globalSettings.getAudioAlertFile( ).c_str( ));
	player->Load( );

	if (!globalSettings.getIsAlertInLoop( ))
		player->Play( );
	else
		if (!isLooping)
		{
			player->PlayLooping( );
			isLooping = true;
		}
}

// Nascondiamo la console
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
[STAThread]
int main( )
{
	Application::EnableVisualStyles( );
	Application::SetCompatibleTextRenderingDefault(false);

	WebcamAlarm_alpha::settingsForm settingsWindow;
	WebcamAlarm_alpha::passwordForm passwordWindow;

	// Apro il collegamento con la webcam
	cv::VideoCapture camera(0);

	if(!camera.isOpened( ))
	{
		MessageBox::Show("Impossibile aprire un canale video.", "Errore", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return 1;
	}

	// Inizializzo le variabili statiche
	hasToEnd = false;
	intruderFound = false;
	isLooping = false;

	windowAHidden = !(globalSettings.getIsWindowAVisible( ));
	windowBHidden = !(globalSettings.getIsWindowBVisible( ));

	SoundPlayer^ player = gcnew SoundPlayer( );

	int counter = 0;
	unsigned int mod;
	
	cv::Mat a;
	cv::Mat b;
	cv::Mat c;

	bool firstTime = true;

	while (!hasToEnd)
	{
		bool intrudersFound = false;

		if (globalSettings.getIsEnabled( ))
		{
			// per la prima esecuzione del programma prendo due frame consecutivamente
			if (firstTime)
			{
				camera >> a;
				camera >> b;
				firstTime = false;
			}
			// per esecuzioni successive, prendo solo la frame b, in quanto
			// la frame a diventerà la vecchia frame b
			else
				camera >> b;

			if (a.empty( ) || b.empty( ))
				return -1;

			// conservo la frame b prima che venga elaborata dall'algoritmo intruderAlarm
			b.copyTo(c);

			// Se un intruso viene rilevato...
			if (intruderAlarm(a, b))
			{
				// Acchiappato!
				if (!intruderFound)
					intruderFound = true;

				// Se bisogna scattare delle immagini
				if (globalSettings.getTakePhoto( ))
				{
					mod = globalSettings.getPhotoForMovement( );
					// Se sono passate n rilevazioni...
					if ((counter % mod) == 0)
						takePhoto(a, counter/mod);

					// Incremento il contatore dei movimenti
					counter++;
				}

				// Suono l'allarme...
				playSound(player);
			}

			// Visualizzazione del fotogramma precedente e successivo
			// preso dalla fotocamera
			if (globalSettings.getIsWindowAVisible( )) 
			{
				if (windowAHidden)
				{
					cv::namedWindow("Finestra A", CV_WINDOW_AUTOSIZE);
					windowAHidden = false;
				}

				cv::imshow("Finestra A", a);
			}
			else
			{
				if (!windowAHidden)
				{
					cvDestroyWindow("Finestra A");
					windowAHidden = true;
				}
			}

			if (globalSettings.getIsWindowBVisible( )) 
			{
				if (windowBHidden)
				{
					cv::namedWindow("Finestra B", CV_WINDOW_AUTOSIZE);
					windowBHidden = false;
				}

				cv::imshow("Finestra B", b);
			}
			else
			{
				if (!windowBHidden)
				{
					cvDestroyWindow("Finestra B");
					windowBHidden = true;
				}
			}
		}

		if (!firstTime)
			c.copyTo(a);

		// Se viene premuto un tasto...
		if ((cv::waitKey(10)) >= 0)
		{
			if (intruderFound && globalSettings.getIsAlertInLoop( ))
			{
				passwordWindow.ShowDialog( );
				
				if (passwordWindow.isOK( ))
				{
					// Fermo l'allarme
					player->Stop( );
					// e se dovessi scegliere l'allarme in loop
					// inizio la riproduzione del suono da capo
					isLooping = false;
					// Il presunto intruso è un addetto alla sicurezza
					intruderFound = false;
				}
			}
		}
	}

    return 0;
}