#include <Windows.h>

#pragma once

namespace Tr1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class frmMain : public System::Windows::Forms::Form
	{
#pragma region Kernel
	public: 	frmMain(void) { InitializeComponent(); }
	protected: ~frmMain() { if (components) delete components; }
	private: System::Windows::Forms::Button^ button1;
	protected:


	private: System::ComponentModel::Container^ components;
#pragma endregion Kernel

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(12, 12);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(260, 228);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Понятно";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &frmMain::button1_Click);
			   this->button1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &frmMain::button1_KeyDown);
			   // 
			   // frmMain
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->ClientSize = System::Drawing::Size(284, 261);
			   this->Controls->Add(this->button1);
			   this->Name = L"frmMain";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"frmMain";
			   this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			   this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &frmMain::frmMain_KeyDown);
			   this->ResumeLayout(false);

		   }
#pragma endregion

#pragma region Voids
	private:
		System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
			this->Focus();
		}
		System::Void frmMain_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyCode == Keys::Escape) Close();
		}
		System::Void button1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyCode == Keys::Escape) Close();
		}
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			Close();
		}
#pragma endregion

	};
}
