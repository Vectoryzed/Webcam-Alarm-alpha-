#pragma once

namespace WebcamAlarm_alpha {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Riepilogo per aboutForm
	/// </summary>
	public ref class aboutForm : public System::Windows::Forms::Form
	{
	public:
		aboutForm(void)
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
		~aboutForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  appTitleLabel;
	private: System::Windows::Forms::Label^  versionInfoLabel;
	private: System::Windows::Forms::Button^  okButton;
	private: System::Windows::Forms::PictureBox^  iconPictureBox;


	protected: 

	private:
		/// <summary>
		/// Variabile di progettazione necessaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metodo necessario per il supporto della finestra di progettazione. Non modificare
		/// il contenuto del metodo con l'editor di codice.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(aboutForm::typeid));
			this->appTitleLabel = (gcnew System::Windows::Forms::Label());
			this->versionInfoLabel = (gcnew System::Windows::Forms::Label());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->iconPictureBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->iconPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// appTitleLabel
			// 
			this->appTitleLabel->AutoSize = true;
			this->appTitleLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->appTitleLabel->Location = System::Drawing::Point(143, 9);
			this->appTitleLabel->Name = L"appTitleLabel";
			this->appTitleLabel->Size = System::Drawing::Size(268, 33);
			this->appTitleLabel->TabIndex = 0;
			this->appTitleLabel->Text = L"Webcam Alarm (Alpha)";
			// 
			// versionInfoLabel
			// 
			this->versionInfoLabel->Location = System::Drawing::Point(146, 53);
			this->versionInfoLabel->Name = L"versionInfoLabel";
			this->versionInfoLabel->Size = System::Drawing::Size(277, 172);
			this->versionInfoLabel->TabIndex = 1;
			this->versionInfoLabel->Text = resources->GetString(L"versionInfoLabel.Text");
			// 
			// okButton
			// 
			this->okButton->Location = System::Drawing::Point(348, 228);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(75, 23);
			this->okButton->TabIndex = 2;
			this->okButton->Text = L"OK";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &aboutForm::okButton_Click);
			// 
			// iconPictureBox
			// 
			this->iconPictureBox->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"iconPictureBox.Image")));
			this->iconPictureBox->Location = System::Drawing::Point(12, 12);
			this->iconPictureBox->Name = L"iconPictureBox";
			this->iconPictureBox->Size = System::Drawing::Size(128, 128);
			this->iconPictureBox->TabIndex = 3;
			this->iconPictureBox->TabStop = false;
			// 
			// aboutForm
			// 
			this->AcceptButton = this->okButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(435, 264);
			this->Controls->Add(this->iconPictureBox);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->versionInfoLabel);
			this->Controls->Add(this->appTitleLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"aboutForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Informazioni su";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->iconPictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void okButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close( );
			 }
};
}
