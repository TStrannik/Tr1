#include "frmMain.h"

#include <Windows.h>
#include <iostream>


#include <vector>
#include <ctime>

#include <list>
#include <deque>
#include <stack>

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
void STL_VECTORS0() {
	using namespace std;

	vector <int> v1;				  // v1: NULL
	vector <int> v2(v1);			  // v2: == v1: NULL
	vector <int> v3 = v1;			  // v3: == v1: NULL
	vector <int> v4(5);				  // v4:  [0][0][0][0][0]
	vector <int> v5(5, 2);			  // v5:  [2][2][2][2][2]
	vector <int> v6{ 1, 2, 4, 5 };    // v6:  [1][2][4][5]
	vector <int> v7 = { 1, 2, 3, 5 }; // v7:  [1][2][3][5]

	vector <int> v11(5);			  // v11: [0][0][0][0][0]
	vector <int> v12{ 5 };			  // v12: [5]
	std::vector<int> v13(5, 2);		  // v13: [2][2][2][2][2]
	std::vector<int> v14{ 5, 2 };	  // v14: [5][2]


	for each (int i in v5) cout << i << " ";
	cout << endl;

	cout << v5.size() << endl << v5.capacity() << endl;

}
void STL_VECTORS1() {
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
void STL_VECTORS2() {
	//
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
void TRY_CATCH() {
	using namespace std;

	float a = 2.0, b = 0.0, c;

	cout << "Write the b variable \n" << endl;
	cin >> b;

	try {
		if (b == 0) throw std::exception("Divide by zero!!!");
		c = a / b;
		cout << c << endl;
	} catch (const std::exception& e){
		cout << e.what() << endl;
		cout << "AAAaaaaaa!!1\n" << endl;
	}

}
void POINTERS() {
	using namespace std;

	int a = 5;
	int *pa = &a;
	int *px = new int(a);
	cout << "adress pa: " << pa << endl;
	cout << "value pa: " << *pa << endl;
	cout << "adress px: " << px << endl;
	cout << "value px: " << *px << endl;

	px = nullptr;
	delete px;

	cout << endl << endl;



	int   b = 8;
	int* py = &b;
	int* pz = &b;
	cout << "value py: " << *py << endl;
	cout << "value b: " << b << endl;

	*py = 10;
	cout << "value py: " << *py << endl;
	cout << "value b: " << b << endl;
}
void STACK() {
	using namespace std;



	stack <int> st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.emplace(35);
	st.push(40);



	auto a = st._Get_container();

	cout << "stack size: " << st.size() << endl;
	cout << "stack size: " << a.size() << endl;
	cout << endl;
	
	cout << a[2] << endl << endl;



	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	cout << endl;



	while (!st.empty()) {
		cout << st.top() << endl;
		st.pop();
	}
	cout << endl << endl;



	stack <int, list <int> > st2;
	stack <int, vector <int> > st3;

	st3.push(10);
	st3.push(20);
	st3.push(30);
	st3.emplace(35);;
	st3.push(40);

	auto b = st2._Get_container();
	//cout << b[2] << endl;				// Err
	auto c = st3._Get_container();
	cout << c[2] << endl;
}
void DEQUE() {
	using namespace std;






}



void APPLICATION_START() {
	setlocale(LC_ALL, "RU_ru");
	system("color 70");
	std::cout << "\n APPLICATION START\n\n";
	std::cout << "\tStatistic:\n\n";


	if (0) {
		STL_VECTORS1();

		STL_VECTORS2();

		CONSOLE_EXP();
		VS_DEBUGGER();
		SIZEOF_ARRAY();
		RANDOMIZER();
		TRY_CATCH();
		POINTERS();
		STACK();

		DEQUE();
	}
	STL_VECTORS0();
	




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
// ( ) STL: Vectors 0
// (+) STL: Vectors 1
// ( ) STL: Vectors 2
// ( ) STL: 
// (+) VS: Debugger
// (+) sizeof
// (+) randomizer & diapasons
// (+) array without repeat
// (+) try-catch
// (+) try-catch, throw, cerr << e.what();
// (+) Pointers
// (+) Stack: <stack> (link in WA)
// ( ) Deque
// ( ) List
// ( ) Threads (lnk WA)
// ( ) metanint.com Chapter 9. Containers
// 
// ( ) Pro level: https://www.youtube.com/watch?v=4ZyOqCT494w&t=51s
// 
// ( ) Codestyle
//
/// BUGS:
//
// ( ) Component: the essence of the problem
// ( ) 