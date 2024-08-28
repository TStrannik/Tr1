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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::ComponentModel::Container^ components;
#pragma endregion Kernel

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(12, 12);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(75, 23);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"button1";
			   this->button1->UseVisualStyleBackColor = true;
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(12, 41);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(75, 23);
			   this->button2->TabIndex = 1;
			   this->button2->Text = L"button2";
			   this->button2->UseVisualStyleBackColor = true;
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(12, 70);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(75, 23);
			   this->button3->TabIndex = 2;
			   this->button3->Text = L"button3";
			   this->button3->UseVisualStyleBackColor = true;
			   // 
			   // frmMain
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->ClientSize = System::Drawing::Size(284, 261);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Name = L"frmMain";
			   this->Text = L"frmMain";
			   this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			   this->ResumeLayout(false);

		   }
#pragma endregion

#pragma region Voids
	private:
		System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
			//
		}
#pragma endregion




	};
}
