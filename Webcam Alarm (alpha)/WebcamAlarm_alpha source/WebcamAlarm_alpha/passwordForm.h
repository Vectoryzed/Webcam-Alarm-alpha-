#pragma once

#include "settings_data.h"

namespace WebcamAlarm_alpha {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Riepilogo per passwordForm
	/// </summary>
	public ref class passwordForm : public System::Windows::Forms::Form
	{
	public:
		passwordForm(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}

		bool isOK( )
		{return ok;}


	protected:
		/// <summary>
		/// Liberare le risorse in uso.
		/// </summary>
		~passwordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  systemPasswordLabel;
	private: System::Windows::Forms::PictureBox^  lockPictureBox;
	private: System::Windows::Forms::MaskedTextBox^  passwordTextBox;
	private: System::Windows::Forms::Button^  okButton;
	private: bool ok;
	private: System::Windows::Forms::Button^  cancelButton;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(passwordForm::typeid));
			this->systemPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->lockPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->passwordTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->lockPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// systemPasswordLabel
			// 
			this->systemPasswordLabel->AutoSize = true;
			this->systemPasswordLabel->Location = System::Drawing::Point(54, 9);
			this->systemPasswordLabel->Name = L"systemPasswordLabel";
			this->systemPasswordLabel->Size = System::Drawing::Size(285, 13);
			this->systemPasswordLabel->TabIndex = 0;
			this->systemPasswordLabel->Text = L"Per l\'operazione richiesta è necessario inserire la password.";
			// 
			// lockPictureBox
			// 
			this->lockPictureBox->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"lockPictureBox.Image")));
			this->lockPictureBox->Location = System::Drawing::Point(8, 16);
			this->lockPictureBox->Name = L"lockPictureBox";
			this->lockPictureBox->Size = System::Drawing::Size(40, 40);
			this->lockPictureBox->TabIndex = 1;
			this->lockPictureBox->TabStop = false;
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->passwordTextBox->Location = System::Drawing::Point(57, 29);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->PasswordChar = '*';
			this->passwordTextBox->Size = System::Drawing::Size(282, 22);
			this->passwordTextBox->TabIndex = 1;
			this->passwordTextBox->TextChanged += gcnew System::EventHandler(this, &passwordForm::passwordTextBox_TextChanged);
			// 
			// okButton
			// 
			this->okButton->Location = System::Drawing::Point(183, 60);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(75, 23);
			this->okButton->TabIndex = 2;
			this->okButton->Text = L"OK";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &passwordForm::okButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->cancelButton->Location = System::Drawing::Point(264, 60);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(75, 23);
			this->cancelButton->TabIndex = 3;
			this->cancelButton->Text = L"Annulla";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &passwordForm::cancelButton_Click);
			// 
			// passwordForm
			// 
			this->AcceptButton = this->okButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->cancelButton;
			this->ClientSize = System::Drawing::Size(356, 98);
			this->ControlBox = false;
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->lockPictureBox);
			this->Controls->Add(this->systemPasswordLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"passwordForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inserisci password";
			this->Load += gcnew System::EventHandler(this, &passwordForm::passwordForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->lockPictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void okButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (passwordTextBox->Text == gcnew String(globalSettings.getPassword( ).c_str( )))
				 {
					 this->Close( );
					 ok = true;
				 }
				 else
					 MessageBox::Show("La password inserita non è corretta.", "Attenzione", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 }
private: System::Void passwordForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 ok = false;
			 passwordTextBox->Text = "";
			 passwordTextBox->Focus( );
			 okButton->Enabled = false;
		 }
private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ok = false;
			 this->Close( );
		 }
private: System::Void passwordTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 okButton->Enabled = (passwordTextBox->Text != "");
		 }
};
}
