#pragma once

#include "settings_data.h"
#include "passwordForm.h"
#include "newPasswordForm.h"
#include "aboutForm.h"

#include <msclr\marshal_cppstd.h>

namespace WebcamAlarm_alpha {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace msclr::interop;

	/// <summary>
	/// Riepilogo per settingsForm
	/// </summary>
	public ref class settingsForm : public System::Windows::Forms::Form
	{
	public:
		settingsForm(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}

	protected:
		/// <summary>
		/// Liberare le risorse in uso.
		/// </summary>
		~settingsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::GroupBox^  generalGroupBox;




	private: System::Windows::Forms::Button^  okButton;
	private: System::Windows::Forms::Button^  cancelButton;




	private: System::Windows::Forms::OpenFileDialog^  audioAlertOpenFileDialog;
	private: System::Windows::Forms::ContextMenuStrip^  alertNotifyContextMenuStrip;
	private: System::Windows::Forms::CheckBox^  takePhotoCheckBox;

	private: System::Windows::Forms::GroupBox^  takePhotoGroupBox;




	private: System::Windows::Forms::Label^  photoForMovementLabel;

	private: System::Windows::Forms::NumericUpDown^  photoForMovementNumericUpDown;
	private: System::Windows::Forms::ToolStripMenuItem^  isEnabledToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ImageList^  alertStateImageList;
	private: System::Windows::Forms::NotifyIcon^  alertNotifyIcon;
	private: System::Windows::Forms::GroupBox^  audioGroupBox;
	private: System::Windows::Forms::CheckBox^  isAlertInLoopCheckBox;

	private: System::Windows::Forms::Button^  browseAudioAlertFileButton;
	private: System::Windows::Forms::TextBox^  audioAlertFileTextBox;
	private: System::Windows::Forms::Label^  audioAlertFileLabel;
	private: System::Windows::Forms::GroupBox^  sensibilityGroupBox;
	private: System::Windows::Forms::TrackBar^  sensibilityTrackBar;
	private: System::Windows::Forms::Label^  sensibilityLabel;
	private: System::Windows::Forms::Label^  sensibilityDescriptionLabel;
	private: System::Windows::Forms::ToolStripMenuItem^  changePasswordToolStripMenuItem;

	private: System::Windows::Forms::ComboBox^  viewComboBox;
	private: System::Windows::Forms::Label^  viewLabel;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variabile di progettazione necessaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metodo necessario per il supporto della finestra di progettazione. Non modificare
		/// il contenuto del metodo con l'editor di codice.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(settingsForm::typeid));
			this->alertNotifyContextMenuStrip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->isEnabledToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changePasswordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generalGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->viewComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->viewLabel = (gcnew System::Windows::Forms::Label());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->audioAlertOpenFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->takePhotoCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->takePhotoGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->photoForMovementNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->photoForMovementLabel = (gcnew System::Windows::Forms::Label());
			this->alertStateImageList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->alertNotifyIcon = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->audioGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->isAlertInLoopCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->browseAudioAlertFileButton = (gcnew System::Windows::Forms::Button());
			this->audioAlertFileTextBox = (gcnew System::Windows::Forms::TextBox());
			this->audioAlertFileLabel = (gcnew System::Windows::Forms::Label());
			this->sensibilityGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->sensibilityDescriptionLabel = (gcnew System::Windows::Forms::Label());
			this->sensibilityTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->sensibilityLabel = (gcnew System::Windows::Forms::Label());
			this->alertNotifyContextMenuStrip->SuspendLayout();
			this->generalGroupBox->SuspendLayout();
			this->takePhotoGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->photoForMovementNumericUpDown))->BeginInit();
			this->audioGroupBox->SuspendLayout();
			this->sensibilityGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->sensibilityTrackBar))->BeginInit();
			this->SuspendLayout();
			// 
			// alertNotifyContextMenuStrip
			// 
			this->alertNotifyContextMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->isEnabledToolStripMenuItem, 
				this->settingsToolStripMenuItem, this->changePasswordToolStripMenuItem, this->toolStripSeparator1, this->aboutToolStripMenuItem, 
				this->exitToolStripMenuItem});
			this->alertNotifyContextMenuStrip->Name = L"alertNotifyContextMenuStrip";
			this->alertNotifyContextMenuStrip->Size = System::Drawing::Size(178, 120);
			// 
			// isEnabledToolStripMenuItem
			// 
			this->isEnabledToolStripMenuItem->Checked = true;
			this->isEnabledToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->isEnabledToolStripMenuItem->Name = L"isEnabledToolStripMenuItem";
			this->isEnabledToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->isEnabledToolStripMenuItem->Text = L"Abilitato";
			this->isEnabledToolStripMenuItem->Click += gcnew System::EventHandler(this, &settingsForm::isEnabledToolStripMenuItem_Click);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"settingsToolStripMenuItem.Image")));
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->settingsToolStripMenuItem->Text = L"Impostazioni...";
			this->settingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &settingsForm::settingsToolStripMenuItem_Click);
			// 
			// changePasswordToolStripMenuItem
			// 
			this->changePasswordToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"changePasswordToolStripMenuItem.Image")));
			this->changePasswordToolStripMenuItem->Name = L"changePasswordToolStripMenuItem";
			this->changePasswordToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->changePasswordToolStripMenuItem->Text = L"Cambia password...";
			this->changePasswordToolStripMenuItem->Click += gcnew System::EventHandler(this, &settingsForm::changePasswordToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(174, 6);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"aboutToolStripMenuItem.Image")));
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->aboutToolStripMenuItem->Text = L"Informazioni su...";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &settingsForm::aboutToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->exitToolStripMenuItem->Text = L"Esci";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &settingsForm::exitToolStripMenuItem_Click);
			// 
			// generalGroupBox
			// 
			this->generalGroupBox->Controls->Add(this->viewComboBox);
			this->generalGroupBox->Controls->Add(this->viewLabel);
			this->generalGroupBox->Location = System::Drawing::Point(12, 12);
			this->generalGroupBox->Name = L"generalGroupBox";
			this->generalGroupBox->Size = System::Drawing::Size(360, 58);
			this->generalGroupBox->TabIndex = 0;
			this->generalGroupBox->TabStop = false;
			this->generalGroupBox->Text = L"Visualizzazione";
			// 
			// viewComboBox
			// 
			this->viewComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->viewComboBox->FormattingEnabled = true;
			this->viewComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Solo finestra A", L"Solo finestra B", L"Finestra A e Finestra B insieme"});
			this->viewComboBox->Location = System::Drawing::Point(75, 24);
			this->viewComboBox->Name = L"viewComboBox";
			this->viewComboBox->Size = System::Drawing::Size(269, 21);
			this->viewComboBox->TabIndex = 1;
			// 
			// viewLabel
			// 
			this->viewLabel->AutoSize = true;
			this->viewLabel->Location = System::Drawing::Point(13, 27);
			this->viewLabel->Name = L"viewLabel";
			this->viewLabel->Size = System::Drawing::Size(56, 13);
			this->viewLabel->TabIndex = 0;
			this->viewLabel->Text = L"Visualizza:";
			// 
			// okButton
			// 
			this->okButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->okButton->Location = System::Drawing::Point(216, 348);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(75, 23);
			this->okButton->TabIndex = 4;
			this->okButton->Text = L"OK";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &settingsForm::okButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->cancelButton->Location = System::Drawing::Point(297, 348);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(75, 23);
			this->cancelButton->TabIndex = 5;
			this->cancelButton->Text = L"Annulla";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &settingsForm::cancelButton_Click);
			// 
			// audioAlertOpenFileDialog
			// 
			this->audioAlertOpenFileDialog->DefaultExt = L"*.wav";
			this->audioAlertOpenFileDialog->Filter = L"File audio WAV (*.wav)|*.wav";
			// 
			// takePhotoCheckBox
			// 
			this->takePhotoCheckBox->AutoSize = true;
			this->takePhotoCheckBox->Location = System::Drawing::Point(6, 0);
			this->takePhotoCheckBox->Name = L"takePhotoCheckBox";
			this->takePhotoCheckBox->Size = System::Drawing::Size(77, 17);
			this->takePhotoCheckBox->TabIndex = 0;
			this->takePhotoCheckBox->Text = L"Ottieni foto";
			this->takePhotoCheckBox->UseVisualStyleBackColor = true;
			this->takePhotoCheckBox->CheckedChanged += gcnew System::EventHandler(this, &settingsForm::takePhotoCheckBox_CheckedChanged);
			// 
			// takePhotoGroupBox
			// 
			this->takePhotoGroupBox->Controls->Add(this->photoForMovementNumericUpDown);
			this->takePhotoGroupBox->Controls->Add(this->photoForMovementLabel);
			this->takePhotoGroupBox->Controls->Add(this->takePhotoCheckBox);
			this->takePhotoGroupBox->Location = System::Drawing::Point(12, 184);
			this->takePhotoGroupBox->Name = L"takePhotoGroupBox";
			this->takePhotoGroupBox->Size = System::Drawing::Size(360, 60);
			this->takePhotoGroupBox->TabIndex = 2;
			this->takePhotoGroupBox->TabStop = false;
			// 
			// photoForMovementNumericUpDown
			// 
			this->photoForMovementNumericUpDown->Location = System::Drawing::Point(117, 27);
			this->photoForMovementNumericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->photoForMovementNumericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->photoForMovementNumericUpDown->Name = L"photoForMovementNumericUpDown";
			this->photoForMovementNumericUpDown->Size = System::Drawing::Size(45, 20);
			this->photoForMovementNumericUpDown->TabIndex = 2;
			this->photoForMovementNumericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// photoForMovementLabel
			// 
			this->photoForMovementLabel->AutoSize = true;
			this->photoForMovementLabel->Location = System::Drawing::Point(14, 29);
			this->photoForMovementLabel->Name = L"photoForMovementLabel";
			this->photoForMovementLabel->Size = System::Drawing::Size(237, 13);
			this->photoForMovementLabel->TabIndex = 1;
			this->photoForMovementLabel->Text = L"Scatta una foto ogni                  movimenti rilevati";
			// 
			// alertStateImageList
			// 
			this->alertStateImageList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"alertStateImageList.ImageStream")));
			this->alertStateImageList->TransparentColor = System::Drawing::Color::Transparent;
			this->alertStateImageList->Images->SetKeyName(0, L"grey_alert_16.ico");
			this->alertStateImageList->Images->SetKeyName(1, L"red_alert_16.ico");
			// 
			// alertNotifyIcon
			// 
			this->alertNotifyIcon->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Warning;
			this->alertNotifyIcon->BalloonTipText = L"Fare clic col tasto destro su questa icona per gestirlo.";
			this->alertNotifyIcon->BalloonTipTitle = L"Webcam Alarm è attivo";
			this->alertNotifyIcon->ContextMenuStrip = this->alertNotifyContextMenuStrip;
			this->alertNotifyIcon->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"alertNotifyIcon.Icon")));
			this->alertNotifyIcon->Text = L"Webcam Alarm";
			this->alertNotifyIcon->Visible = true;
			// 
			// audioGroupBox
			// 
			this->audioGroupBox->Controls->Add(this->isAlertInLoopCheckBox);
			this->audioGroupBox->Controls->Add(this->browseAudioAlertFileButton);
			this->audioGroupBox->Controls->Add(this->audioAlertFileTextBox);
			this->audioGroupBox->Controls->Add(this->audioAlertFileLabel);
			this->audioGroupBox->Location = System::Drawing::Point(12, 76);
			this->audioGroupBox->Name = L"audioGroupBox";
			this->audioGroupBox->Size = System::Drawing::Size(360, 102);
			this->audioGroupBox->TabIndex = 1;
			this->audioGroupBox->TabStop = false;
			this->audioGroupBox->Text = L"Audio";
			// 
			// isAlertInLoopCheckBox
			// 
			this->isAlertInLoopCheckBox->AutoSize = true;
			this->isAlertInLoopCheckBox->Location = System::Drawing::Point(16, 73);
			this->isAlertInLoopCheckBox->Name = L"isAlertInLoopCheckBox";
			this->isAlertInLoopCheckBox->Size = System::Drawing::Size(94, 17);
			this->isAlertInLoopCheckBox->TabIndex = 3;
			this->isAlertInLoopCheckBox->Text = L"Allarme in loop";
			this->isAlertInLoopCheckBox->UseVisualStyleBackColor = true;
			// 
			// browseAudioAlertFileButton
			// 
			this->browseAudioAlertFileButton->Location = System::Drawing::Point(269, 38);
			this->browseAudioAlertFileButton->Name = L"browseAudioAlertFileButton";
			this->browseAudioAlertFileButton->Size = System::Drawing::Size(75, 23);
			this->browseAudioAlertFileButton->TabIndex = 2;
			this->browseAudioAlertFileButton->Text = L"Sfoglia...";
			this->browseAudioAlertFileButton->UseVisualStyleBackColor = true;
			this->browseAudioAlertFileButton->Click += gcnew System::EventHandler(this, &settingsForm::browseAudioAlertFileButton_Click);
			// 
			// audioAlertFileTextBox
			// 
			this->audioAlertFileTextBox->Location = System::Drawing::Point(16, 40);
			this->audioAlertFileTextBox->Name = L"audioAlertFileTextBox";
			this->audioAlertFileTextBox->ReadOnly = true;
			this->audioAlertFileTextBox->Size = System::Drawing::Size(247, 20);
			this->audioAlertFileTextBox->TabIndex = 1;
			// 
			// audioAlertFileLabel
			// 
			this->audioAlertFileLabel->AutoSize = true;
			this->audioAlertFileLabel->Location = System::Drawing::Point(13, 24);
			this->audioAlertFileLabel->Name = L"audioAlertFileLabel";
			this->audioAlertFileLabel->Size = System::Drawing::Size(85, 13);
			this->audioAlertFileLabel->TabIndex = 0;
			this->audioAlertFileLabel->Text = L"Suono di allarme";
			// 
			// sensibilityGroupBox
			// 
			this->sensibilityGroupBox->Controls->Add(this->sensibilityDescriptionLabel);
			this->sensibilityGroupBox->Controls->Add(this->sensibilityTrackBar);
			this->sensibilityGroupBox->Controls->Add(this->sensibilityLabel);
			this->sensibilityGroupBox->Location = System::Drawing::Point(12, 250);
			this->sensibilityGroupBox->Name = L"sensibilityGroupBox";
			this->sensibilityGroupBox->Size = System::Drawing::Size(360, 87);
			this->sensibilityGroupBox->TabIndex = 3;
			this->sensibilityGroupBox->TabStop = false;
			this->sensibilityGroupBox->Text = L"Sensibilità del rilevamento";
			// 
			// sensibilityDescriptionLabel
			// 
			this->sensibilityDescriptionLabel->Location = System::Drawing::Point(77, 21);
			this->sensibilityDescriptionLabel->Name = L"sensibilityDescriptionLabel";
			this->sensibilityDescriptionLabel->Size = System::Drawing::Size(267, 13);
			this->sensibilityDescriptionLabel->TabIndex = 1;
			this->sensibilityDescriptionLabel->Text = L"Molto bassa";
			this->sensibilityDescriptionLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// sensibilityTrackBar
			// 
			this->sensibilityTrackBar->AutoSize = false;
			this->sensibilityTrackBar->LargeChange = 1;
			this->sensibilityTrackBar->Location = System::Drawing::Point(77, 37);
			this->sensibilityTrackBar->Maximum = 5;
			this->sensibilityTrackBar->Minimum = 1;
			this->sensibilityTrackBar->Name = L"sensibilityTrackBar";
			this->sensibilityTrackBar->Size = System::Drawing::Size(267, 38);
			this->sensibilityTrackBar->TabIndex = 2;
			this->sensibilityTrackBar->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			this->sensibilityTrackBar->Value = 1;
			this->sensibilityTrackBar->ValueChanged += gcnew System::EventHandler(this, &settingsForm::sensibilityTrackBar_ValueChanged);
			// 
			// sensibilityLabel
			// 
			this->sensibilityLabel->AutoSize = true;
			this->sensibilityLabel->Location = System::Drawing::Point(14, 48);
			this->sensibilityLabel->Name = L"sensibilityLabel";
			this->sensibilityLabel->Size = System::Drawing::Size(57, 13);
			this->sensibilityLabel->TabIndex = 0;
			this->sensibilityLabel->Text = L"Sensibilità:";
			// 
			// settingsForm
			// 
			this->AcceptButton = this->okButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->cancelButton;
			this->ClientSize = System::Drawing::Size(384, 383);
			this->ControlBox = false;
			this->Controls->Add(this->sensibilityGroupBox);
			this->Controls->Add(this->audioGroupBox);
			this->Controls->Add(this->takePhotoGroupBox);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->generalGroupBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"settingsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Impostazioni";
			this->Load += gcnew System::EventHandler(this, &settingsForm::settingsForm_Load);
			this->alertNotifyContextMenuStrip->ResumeLayout(false);
			this->generalGroupBox->ResumeLayout(false);
			this->generalGroupBox->PerformLayout();
			this->takePhotoGroupBox->ResumeLayout(false);
			this->takePhotoGroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->photoForMovementNumericUpDown))->EndInit();
			this->audioGroupBox->ResumeLayout(false);
			this->audioGroupBox->PerformLayout();
			this->sensibilityGroupBox->ResumeLayout(false);
			this->sensibilityGroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->sensibilityTrackBar))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void settingsForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 isEnabledToolStripMenuItem->Checked = globalSettings.getIsEnabled( );

			 if (globalSettings.getIsWindowAVisible( ) && globalSettings.getIsWindowBVisible( ))
				 viewComboBox->SelectedIndex = 2;
			 else if (globalSettings.getIsWindowAVisible( ))
				 viewComboBox->SelectedIndex = 0;
			 else if (globalSettings.getIsWindowBVisible( ))
				 viewComboBox->SelectedIndex = 1;

			 audioAlertFileTextBox->Text = gcnew String(globalSettings.getAudioAlertFile( ).c_str( ));
			 isAlertInLoopCheckBox->Checked = globalSettings.getIsAlertInLoop( );
			 takePhotoCheckBox->Checked = globalSettings.getTakePhoto( );
			 photoForMovementNumericUpDown->Value = globalSettings.getPhotoForMovement( );
			 photoForMovementLabel->Enabled = takePhotoCheckBox->Checked;
			 photoForMovementNumericUpDown->Enabled = takePhotoCheckBox->Checked;
			 sensibilityTrackBar->Value = globalSettings.getSensibility( );

			 alertNotifyIcon->ShowBalloonTip(5);
		 }
private: System::Void okButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 globalSettings.setIsWindowAVisible(viewComboBox->SelectedIndex == 0 || viewComboBox->SelectedIndex == 2);
			 globalSettings.setIsWindowBVisible(viewComboBox->SelectedIndex == 1 || viewComboBox->SelectedIndex == 2);
			 globalSettings.setAudioAlertFile(marshal_as<std::string>(audioAlertFileTextBox->Text));
			 globalSettings.setIsAlertInLoop(isAlertInLoopCheckBox->Checked);
			 globalSettings.setTakePhoto(takePhotoCheckBox->Checked);
			 globalSettings.setPhotoForMovement(Decimal::ToUInt16(photoForMovementNumericUpDown->Value));
			 globalSettings.setSensibility(sensibilityTrackBar->Value);
			 isLooping = false;
			 this->Hide( );
		 }
private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (globalSettings.getIsWindowAVisible( ) && globalSettings.getIsWindowBVisible( ))
				 viewComboBox->SelectedIndex = 2;
			 else if (globalSettings.getIsWindowAVisible( ))
				 viewComboBox->SelectedIndex = 0;
			 else if (globalSettings.getIsWindowBVisible( ))
				 viewComboBox->SelectedIndex = 1;

			 audioAlertFileTextBox->Text = gcnew String(globalSettings.getAudioAlertFile( ).c_str( ));
			 isAlertInLoopCheckBox->Checked = globalSettings.getIsAlertInLoop( );
			 takePhotoCheckBox->Checked = globalSettings.getTakePhoto( );
			 photoForMovementNumericUpDown->Value = globalSettings.getPhotoForMovement( );
			 photoForMovementLabel->Enabled = takePhotoCheckBox->Checked;
			 photoForMovementNumericUpDown->Enabled = takePhotoCheckBox->Checked;
			 sensibilityTrackBar->Value = globalSettings.getSensibility( );
			 this->Hide( );
		 }
private: System::Void takePhotoCheckBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 photoForMovementLabel->Enabled = takePhotoCheckBox->Checked;
			 photoForMovementNumericUpDown->Enabled = takePhotoCheckBox->Checked;
		 }
private: System::Void isEnabledToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 WebcamAlarm_alpha::passwordForm form;
			 form.ShowDialog( );

			 if (form.isOK( ))
			 {
				isEnabledToolStripMenuItem->Checked = !isEnabledToolStripMenuItem->Checked;
				globalSettings.setIsEnabled(isEnabledToolStripMenuItem->Checked);

				if (isEnabledToolStripMenuItem->Checked)
					alertNotifyIcon->Icon = gcnew System::Drawing::Icon("red_alert_16.ico");
				else
					alertNotifyIcon->Icon = gcnew System::Drawing::Icon("grey_alert_16.ico");
			 }
		 }
private: System::Void settingsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 WebcamAlarm_alpha::passwordForm form;
			 form.ShowDialog( );
			 
			 if (form.isOK( ))
				this->Show( );
		 }
private: System::Void browseAudioAlertFileButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (audioAlertOpenFileDialog->ShowDialog( ) == Windows::Forms::DialogResult::OK)
			 {
				String^ audioFile = audioAlertOpenFileDialog->FileName;
				audioAlertFileTextBox->Text = audioFile;
				globalSettings.setAudioAlertFile(marshal_as<std::string>(audioFile));
			 }
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 WebcamAlarm_alpha::passwordForm form;
			 form.ShowDialog( );
			 
			 if (form.isOK( ))
				hasToEnd = true;
		 }
private: System::Void sensibilityTrackBar_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (sensibilityTrackBar->Value == 1)
				 sensibilityDescriptionLabel->Text = "Molto bassa";
			 else if (sensibilityTrackBar->Value == 2)
				 sensibilityDescriptionLabel->Text = "Bassa";
			 else if (sensibilityTrackBar->Value == 3)
				 sensibilityDescriptionLabel->Text = "Media";
			 else if (sensibilityTrackBar->Value == 4)
				 sensibilityDescriptionLabel->Text = "Alta";
			 else
				 sensibilityDescriptionLabel->Text = "Molto alta";
		 }
private: System::Void changePasswordToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 WebcamAlarm_alpha::passwordForm passwordWindow;
			 WebcamAlarm_alpha::newPasswordForm newPasswordWindow;
			 passwordWindow.ShowDialog( );

			 if (passwordWindow.isOK( ))
				newPasswordWindow.ShowDialog( );
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 WebcamAlarm_alpha::aboutForm form;
			 form.ShowDialog( );
		 }
};
}
