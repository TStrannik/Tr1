#include "frmMain.h"

#include <Windows.h>
#include <iostream>


#include <vector>


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]


void CONSOLE() {
	Console::SetWindowPosition(0, 0);

	Console::Write(L"\tOMG! Console::Write(L\"\")\n");
	Console::WriteLine();

	Console::Beep();
	Console::Beep(1000, 50);
	
	Console::WindowHeight = 50;
	Console::SetWindowSize(100, 55);
	Console::Title = "C++\\CLI training.";
}


void STL_VECTORS() {
	using namespace std;

	vector <int> ar1 = { 1, 2, 3, 4, 5 };
	ar1.push_back(6);
	ar1.push_back(7);

	for each (int i in ar1) {
		cout << i << " ";
	}
	cout << endl;

	cout << ar1.size() << endl;
	cout << ar1[4] << endl;
	cout << endl;


	vector <int> ar2({ 1, 2, 3, 4 });

	for each (int i in ar2) {
		cout << i << " ";
	}
	cout << endl;

	ar2[2] = 10;

	for each (int i in ar2) {
		cout << i << " ";
	}
	cout << endl;

	cout << ar2[2] << endl;
	cout << ar2.at(2) << endl;
	

	


	/*try							  { cout << ar2[4] << endl; }
	catch (const std::out_of_range& ex) { cout << "Error !!! Out of range" << endl; cerr << ex.what(); }*/
		
	//cout << ar2.at(4) << endl;

}







void APPLICATION_START() {
	setlocale(LC_ALL, "RU_ru");
	system("color 70");
	std::cout << "\n APPLICATION START\n\n";
	std::cout << "\tStatistic:\n\n";



	CONSOLE();
	STL_VECTORS();



	std::cout << "\n\n";
}
void APPLICATION_FORM() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Tr1::frmMain form;
	Application::Run(% form);
}
void APPLICATION_END() {
	std::cout << "\n APPLICATION END\n\n";
	//system("pause");
}

/// ver 0.0.0
int main(array<String^>^ args) {
	APPLICATION_START();
	APPLICATION_FORM();
	APPLICATION_END();
	return 0;
}




/// TODO:
// 
// (+) MVP
// (+) GIT Connection
// (+) GIT Make "Develop" branch
// 
// (+) CONSOLE
// -------------------
// ( ) STL: Vectors
// -------------------
// ( ) Task
//
//
/// BUGS:
//
// ( ) Component: the essence of the problem
// ( ) 