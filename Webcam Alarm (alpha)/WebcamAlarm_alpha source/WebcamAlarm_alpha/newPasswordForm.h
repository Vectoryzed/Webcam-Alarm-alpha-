#pragma once

#include "settings_data.h"

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
	/// Riepilogo per newPasswordForm
	/// </summary>
	public ref class newPasswordForm : public System::Windows::Forms::Form
	{
	public:
		newPasswordForm(void)
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
		~newPasswordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  changePasswordGroupBox;
	private: System::Windows::Forms::MaskedTextBox^  confirmPasswordTextBox;
	protected: 

	private: System::Windows::Forms::Label^  confirmPasswordLabel;
	private: System::Windows::Forms::MaskedTextBox^  newPasswordTextBox;

	private: System::Windows::Forms::Label^  newPasswordLabel;
	private: System::Windows::Forms::Button^  okButton;
	private: System::Windows::Forms::Button^  cancelButton;

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
			this->changePasswordGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->confirmPasswordTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->confirmPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->newPasswordTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->newPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->changePasswordGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// changePasswordGroupBox
			// 
			this->changePasswordGroupBox->Controls->Add(this->confirmPasswordTextBox);
			this->changePasswordGroupBox->Controls->Add(this->confirmPasswordLabel);
			this->changePasswordGroupBox->Controls->Add(this->newPasswordTextBox);
			this->changePasswordGroupBox->Controls->Add(this->newPasswordLabel);
			this->changePasswordGroupBox->Location = System::Drawing::Point(12, 12);
			this->changePasswordGroupBox->Name = L"changePasswordGroupBox";
			this->changePasswordGroupBox->Size = System::Drawing::Size(308, 90);
			this->changePasswordGroupBox->TabIndex = 0;
			this->changePasswordGroupBox->TabStop = false;
			this->changePasswordGroupBox->Text = L"Cambia password";
			// 
			// confirmPasswordTextBox
			// 
			this->confirmPasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->confirmPasswordTextBox->Location = System::Drawing::Point(124, 52);
			this->confirmPasswordTextBox->Name = L"confirmPasswordTextBox";
			this->confirmPasswordTextBox->PasswordChar = '*';
			this->confirmPasswordTextBox->Size = System::Drawing::Size(169, 22);
			this->confirmPasswordTextBox->TabIndex = 4;
			this->confirmPasswordTextBox->TextChanged += gcnew System::EventHandler(this, &newPasswordForm::confirmPasswordTextBox_TextChanged);
			// 
			// confirmPasswordLabel
			// 
			this->confirmPasswordLabel->AutoSize = true;
			this->confirmPasswordLabel->Location = System::Drawing::Point(15, 57);
			this->confirmPasswordLabel->Name = L"confirmPasswordLabel";
			this->confirmPasswordLabel->Size = System::Drawing::Size(103, 13);
			this->confirmPasswordLabel->TabIndex = 3;
			this->confirmPasswordLabel->Text = L"Conferma password:";
			// 
			// newPasswordTextBox
			// 
			this->newPasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->newPasswordTextBox->Location = System::Drawing::Point(124, 22);
			this->newPasswordTextBox->Name = L"newPasswordTextBox";
			this->newPasswordTextBox->PasswordChar = '*';
			this->newPasswordTextBox->Size = System::Drawing::Size(169, 22);
			this->newPasswordTextBox->TabIndex = 2;
			this->newPasswordTextBox->TextChanged += gcnew System::EventHandler(this, &newPasswordForm::newPasswordTextBox_TextChanged);
			// 
			// newPasswordLabel
			// 
			this->newPasswordLabel->AutoSize = true;
			this->newPasswordLabel->Location = System::Drawing::Point(15, 27);
			this->newPasswordLabel->Name = L"newPasswordLabel";
			this->newPasswordLabel->Size = System::Drawing::Size(90, 13);
			this->newPasswordLabel->TabIndex = 1;
			this->newPasswordLabel->Text = L"Nuova password:";
			// 
			// okButton
			// 
			this->okButton->Location = System::Drawing::Point(164, 110);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(75, 23);
			this->okButton->TabIndex = 1;
			this->okButton->Text = L"OK";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &newPasswordForm::okButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->cancelButton->Location = System::Drawing::Point(245, 110);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(75, 23);
			this->cancelButton->TabIndex = 2;
			this->cancelButton->Text = L"Annulla";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &newPasswordForm::cancelButton_Click);
			// 
			// newPasswordForm
			// 
			this->AcceptButton = this->okButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->cancelButton;
			this->ClientSize = System::Drawing::Size(332, 145);
			this->ControlBox = false;
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->changePasswordGroupBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"newPasswordForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Nuova password";
			this->Load += gcnew System::EventHandler(this, &newPasswordForm::newPasswordForm_Load);
			this->changePasswordGroupBox->ResumeLayout(false);
			this->changePasswordGroupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void newPasswordForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 newPasswordTextBox->Text = "";
				 confirmPasswordTextBox->Text = "";
				 okButton->Enabled = false;
			 }
private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close( );
		 }
private: System::Void okButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (confirmPasswordTextBox->Text == newPasswordTextBox->Text)
			 {
				globalSettings.setPassword(marshal_as<std::string>(newPasswordTextBox->Text));
				MessageBox::Show("La password è stata cambiata.", "Nuova password", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close( );
			 }
			 else
				MessageBox::Show("Le due password non coincidono.", "Attenzione", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		 }
private: System::Void newPasswordTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 okButton->Enabled = ((newPasswordTextBox->Text != "") && (confirmPasswordTextBox->Text != ""));
		 }
private: System::Void confirmPasswordTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 okButton->Enabled = ((newPasswordTextBox->Text != "") && (confirmPasswordTextBox->Text != ""));
		 }
};
}
