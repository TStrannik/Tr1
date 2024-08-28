#include "frmMain.h"

#include <Windows.h>
#include <iostream>


#include <vector>


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]


int Sum(int a, int b) {
	int c = a + b; int d = c; int e = d;
	int f = e;
	int g = e;
	return g; 
}



void CONSOLE() {
	Console::SetWindowPosition(0, 0);

	Console::WriteLine();
	Console::WriteLine();
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

#pragma region ar1
	vector <int> ar1 = { 10, 20, 30, 40, 50 };
	ar1.push_back(60);
	ar1.push_back(70);
	
	for each (int i in ar1) cout << i << " ";
	cout << endl << endl;

	cout << ar1.size() << endl;
	cout << ar1[4] << endl;
	cout << endl;
#pragma endregion ar1



#pragma region ar2
	vector <int> ar2({ 10, 20, 30, 40 });
	for each (int i in ar2) cout << i << " ";
	cout << endl << endl;

	ar2[2] = 100;

	for each (int i in ar2) cout << i << " ";
	cout << endl;

	cout << ar2[2] << endl;
	cout << ar2.at(2) << endl;
	cout << endl;
	
	try									 { cout << ar2.at(4) << endl; }
	catch (const std::out_of_range & ex) { cout << ex.what() << endl; }
	cout << endl;

	cout << ar2.size() << endl; ar2.clear(); cout << ar2.size() << endl;
	cout << endl;
#pragma endregion ar2



#pragma region ar3
	vector <int> ar3 = { 1, 2, 3, 4, 5, 6, 7, 8 };  // ar3 [1][2][3][4][5][6][7][8]
	cout << "Size: " << ar3.size() << endl;
	cout << "Capacity: " << ar3.capacity() << endl;
	cout << endl;

	ar3.reserve(15);								// ar3 [1][2][3][4][5][6][7][8][][][][][][][]

	ar3.push_back(9);
	ar3.push_back(10);
	ar3.push_back(11);
	ar3.push_back(12);
	ar3.push_back(13);								// ar3 [1][2][3][4][5][6][7][8][9][10][11][12][13][][]

	cout << "Size: " << ar3.size() << endl;
	cout << "Capacity: " << ar3.capacity() << endl;
	cout << endl;

	ar3.shrink_to_fit();							// ar3 [1][2][3][4][5][6][7][8][9][10][11][12][13]
	cout << "Size: " << ar3.size() << endl;
	cout << "Capacity: " << ar3.capacity() << endl;
	cout << endl;
#pragma endregion ar3



#pragma region ar4
	vector <int> ar4(10, 1337);
	for each (int i in ar4) cout << i << " ";
	cout << endl << endl;

	ar4.resize(15);
	for each (int i in ar4) cout << i << " ";
	cout << endl << endl;

	cout << ar4.empty() << endl; ar4.clear(); cout << ar4.empty() << endl;
	cout << endl;
#pragma endregion ar4

}
void VS_DEBUGGER() {
	using namespace std;

	int a = 1;
	int b = 2;
	int c = 6;

	//c = a + b;

	c = Sum(a, b);

	cout << "step 1" << endl;
	cout << "step 2" << endl;
	cout << "step 3" << endl;
	cout << "step 4" << endl;
	cout << "step 5" << endl;
	
}






void APPLICATION_START() {
	setlocale(LC_ALL, "RU_ru");
	system("color 70");
	std::cout << "\n APPLICATION START\n\n";
	std::cout << "\tStatistic:\n\n";


	//STL_VECTORS();
	//CONSOLE();
	//VS_DEBUGGER();





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
// (+) VS: Debugger
// (+) try-catch
// ( ) try-catch, throw, cerr << e.what();
// ( ) STL: 
//
//
/// BUGS:
//
// ( ) Component: the essence of the problem
// ( ) 