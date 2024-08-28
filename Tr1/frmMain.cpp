#include "frmMain.h"

#include <Windows.h>
#include <iostream>


#include <vector>
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]


int Sum(int a, int b) {
	int c = a + b; int d = c; int e = d;
	int f = e;
	int g = e;
	return g; 
}



void CONSOLE_EXP() {
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
void SIZEOF_ARRAY() {
	using namespace std;

	cout << "int: \t\t" << sizeof(int) << " byte\n";
	cout << "float: \t\t" << sizeof(float) << " byte\n";
	cout << "double: \t" << sizeof(double) << " byte\n";
	cout << "char: \t\t" << sizeof(char) << " byte\n";
	cout << "String^: \t" << sizeof(String^) << " byte\n";
	cout << endl;

	int a;
	cout << "int a: \t\t" << sizeof(a) << " byte\n";
	cout << endl;



	const int SIZE = 10;
	int arr1[SIZE];
	cout << sizeof(arr1) << " byte\n";
	cout << endl;



	int arr2[]{ 10, 20, 30, 40 };

	// first cicle
	for each (int i in arr2) cout << i << " ";
	cout << endl;

	// second cicle
	for (int i = 0; i < sizeof(arr2) / sizeof(int); i++) cout << arr2[i] << " ";
	cout << endl;

	// third cicle
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) cout << arr2[i] << " ";
	cout << endl;

}
void RANDOMIZER() {
	using namespace std;

	srand(time(NULL));

	int a, b, c;
	a = rand() % 100;					  cout << a << endl;		// [  0..100]
	b = rand() % (80 - 20 + 1) + 20;	  cout << b << endl;		// [ 20..80 ]
	c = rand() % (0 - (-50) + 1) + (-50); cout << c << endl;		// [-50..0  ]
	cout << endl;


	/// D E A C T I V A T I O N   O F   T H E   C A B I N A !
	int const SIZE = 20;
	int arr[SIZE] = { -1 };
	int condidate = 0;


	/// ROUND 1 FIGHT!

	int counter = 0;
	bool cond = false;
	while (counter < SIZE) {
		cond = false;
		condidate = rand() % SIZE + 1;
		for (int j = 0; j < counter; j++) if (arr[j] == condidate) { cond = true; break; }		
		if (!cond) { arr[counter] = condidate; counter++; }		
	}
	for each (int i in arr) cout << i << " ";
	cout << endl;



	/// ROUND 2 FIGHT!

	for (int i = 0; i < SIZE; i++) {
back:	
		condidate = rand() % SIZE + 1;
		for (int j = 0; j < i; j++) if (arr[j] == condidate) goto back;
		arr[i] = condidate;
	}
	for each (int i in arr) cout << i << " ";
	cout << endl;

}




void APPLICATION_START() {
	setlocale(LC_ALL, "RU_ru");
	system("color 70");
	std::cout << "\n APPLICATION START\n\n";
	std::cout << "\tStatistic:\n\n";


	if (0) {
		STL_VECTORS();
		CONSOLE_EXP();
		VS_DEBUGGER();
		SIZEOF_ARRAY();
	}
	RANDOMIZER();

	



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
// ( ) STL: 
// ( ) STL: 
// (+) VS: Debugger
// (+) sizeof
// (+) randomizer & diapasons
// (+) array without repeat
// (+) try-catch
// ( ) try-catch, throw, cerr << e.what();
//
//
/// BUGS:
//
// ( ) Component: the essence of the problem
// ( ) 