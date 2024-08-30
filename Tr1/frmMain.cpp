#include "frmMain.h"

#include <Windows.h>
#include <iostream>


#include <ctime>

#include <vector>
#include <array>
#include <list>
#include <deque>
#include <stack>

//#include <hash_set>
#include <unordered_map>
#include <unordered_set>


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
	vector <int> v13(5, 2);			  // v13: [2][2][2][2][2]
	vector <int> v14{ 5, 2 };		  // v14: [5][2]


	vector <int> v = v5;
	for each (int i in v) cout << i << " ";
	cout << endl;

	cout << v.size()     << endl 
		 << v.capacity() << endl;



	vector <int> sv = { 10, 20, 30, 40, 50 };
	cout << sv.front() << endl;
	cout << sv.back()  << endl;


}
void STL_VECTORS1() {
	using namespace std;

#pragma region ar1
	vector <int> ar1 = { 10, 20, 30,  40, 50 };//<--
							     // ^			    |
	ar1.push_back(60);	         // |			    |
	ar1.push_back(70);		     // |			    |
			ar1.emplace(ar1.begin() + 3, 35);	 // |
							ar1.emplace_back(75);// |
	
	for each (auto i in ar1) cout << i << " "; cout << endl << endl;

	cout << ar1.size() << endl;
	cout << ar1[4] << endl;
	cout << endl;
#pragma endregion ar1


#pragma region ar2
	vector <int> ar2({ 10, 20, 30, 40 });
	cout << "ar2: "; for each (auto i in ar2) cout << i << " ";
	cout << endl << endl;

	ar2[2] = 100;

	cout << "ar2: "; for each (auto i in ar2) cout << i << " "; cout << endl;

	cout << ar2[2] << endl;
	cout << ar2.at(2) << endl;
	cout << endl;
	
	try									 { cout << ar2.at(4) << endl; }
	catch (const std::out_of_range & ex) { cout << ex.what() << endl; }
	cout << endl;

	cout << ar2.size() << endl;
	ar2.clear();
	cout << ar2.size() << endl;
	cout << endl;
#pragma endregion ar2



#pragma region ar3
	vector <int> ar3 = { 1, 2, 3, 4, 5, 6, 7, 8 };  // ar3 [1][2][3][4][5][6][7][8]
	cout << "Size: " << ar3.size() << endl;
	cout << "Capacity: " << ar3.capacity() << endl;
	cout << endl;

	ar3.reserve(15);								// ar3 [1][2][3][4][5][6][7][8][N][N][N][N][N][N][N]

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
	cout << "ar4: "; for each (int i in ar4) cout << i << " "; cout << endl << endl;

	ar4.resize(15);
	cout << "ar4: "; for each (int i in ar4) cout << i << " "; cout << endl << endl;

	cout << ar4.empty() << endl;
	ar4.clear();
	cout << ar4.empty() << endl;
	cout << endl;
#pragma endregion ar4



#pragma region ar5
	vector <int> ar5 = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }; 
	cout << "ar5: "; for each (int i in ar5) cout << i << " ";  cout << endl;

	ar5.insert(ar5.end() - ar5.size() / 2, 777);
	cout << "ar5: "; for each (int i in ar5) cout << i << " ";  cout << endl;

	ar5.pop_back();
	cout << "ar5: "; for each (int i in ar5) cout << i << " ";  cout << endl;

	ar5.erase(ar5.begin() + 2);
	cout << "ar5: "; for each (int i in ar5) cout << i << " ";  cout << endl;

	ar5.erase(ar5.begin() + 2, ar5.end());
	cout << "ar5: "; for each (int i in ar5) cout << i << " ";  cout << endl;

	ar5.assign(4, 77);
	cout << "ar5: "; for each (int i in ar5) cout << i << " ";  cout << endl;
	cout << endl;

	vector <int> arA;
	arA.swap(ar5);
	cout << "arA: "; for each (int i in arA) cout << i << " ";  cout << endl;
	cout << "ar5: "; for each (int i in ar5) cout << i << " ";  cout << endl;

#pragma endregion ar5
	
	/*
#pragma region C A B I N A �1
	cout << endl << "\t\t C A B I N A #1\n";
	vector <int> V;

	cout << "Enter size of vector <int>\n";
	int N; cin >> N; int n;

	cout << "Enter elements of this vector\n";
	for (int i = 0; i < N; i++) { cin >> n; V.push_back(n); }

	cout << "V: "; for (auto i{ V.rbegin()}; i != V.rend(); ++i) cout << *i << " ";

#pragma endregion
*/
	



#pragma region C A B I N A �2
	cout << endl << "\t\t C A B I N A #2\n";
	vector <int> V2;

	cout << "Enter size of vector <int>\n";
	int N; cin >> N;

	//unique_ptr <int> ptr;		// What?
	//make_unique

	for (int i = 0; i < N; i++) V2.push_back(i * i);
	cout << "V2: "; for each (int i in V2) cout << i << " ";
	cout << endl;

	int Sum = 0;
	for each (int i in V2) Sum += i;
	cout << Sum;



	

#pragma endregion
	



	cout << endl;
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
	for each (int i in arr2) cout << i << " "; cout << endl;

	// second cicle
	for (int i = 0; i < sizeof(arr2) / sizeof(int); i++) cout << arr2[i] << " "; cout << endl;

	// third cicle
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) cout << arr2[i] << " "; cout << endl;


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
	int candidate = 0;


	/// ROUND 1 FIGHT!

	int counter = 0;
	bool cond = false;
	while (counter < SIZE) {
		cond = false;
		candidate = rand() % SIZE + 1;
		for (int j = 0; j < counter; j++) if (arr[j] == candidate) { cond = true; break; }		
		if (!cond) { arr[counter] = candidate; counter++; }		
	}
	for each (int i in arr) cout << i << " ";
	cout << endl;



	/// ROUND 2 FIGHT!

	for (int i = 0; i < SIZE; i++) {
back:	
		candidate = rand() % SIZE + 1;
		for (int j = 0; j < i; j++) if (arr[j] == candidate) goto back;
		arr[i] = candidate;
	}
	for each (int i in arr) cout << i << " ";
	cout << endl;


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


	cout << endl;
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


	cout << endl;
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



	stack <int, list <int> > st2;						//?
	stack <int, vector <int> > st3;						//?

	st3.push(10);
	st3.push(20);
	st3.push(30);
	st3.emplace(35);;
	st3.push(40);

	auto b = st2._Get_container();
	//cout << b[2] << endl;				// Err
	auto c = st3._Get_container();
	cout << c[2] << endl;

	cout << endl;
}
void DEQUE() {
	using namespace std;






}
void ITERATORS() {
	using namespace std;

	list <int> ::iterator iL;

	vector <int> V = { 10, 20, 30, 40, 50 };
	vector <int> ::iterator iV = V.begin();
	vector <int> ::iterator iVe = V.end();

	cout << *iV << endl;
	++iV;    cout << *iV << endl;
	--iV;    cout << *iV << endl;
	iV += 2; cout << *iV << endl;
	iV -= 2; cout << *iV << endl;
	cout << *(iV + 2) << endl;

	if (iV != iVe) cout << "not equal" << endl;
	if (iV < iVe)  cout << "less than" << endl;
	cout << endl;






	vector <int> numbers{ 10, 20, 30, 40 };
	auto iter{ numbers.begin() };

	while (iter != numbers.end()) { cout << *iter << " "; ++iter; }
	cout << endl;
											//f.e., ... .end() - 2;...
	for (auto start{ numbers.begin() }; start != numbers.end(); start++) cout << *start << " ";
	cout << endl;

	for each (auto i in numbers) cout << i << " ";
	cout << endl;
	cout << endl;





	const vector <int> vNums{ 10, 20, 30, 40, 50 };
	for (auto it{ vNums.begin() }; it != vNums.end(); ++it) cout << *it << " ";
	cout << endl;

	const vector <int> vNums2{ 10, 20, 30, 40, 50 };
	for (auto it{ vNums2.cbegin() }; it != vNums2.cend(); ++it) cout << *it << " ";
	cout << endl;



	vector <int> vR{ 10, 20, 30, 40, 50 };
	//vector <int> ::reverse_iterator iR = vR.rend();

	for (auto iR{ vR.rbegin() }; iR != vR.rend(); ++iR) cout << *iR << " ";
	cout << endl;



	const vector <int> crV{ 10, 20, 30, 40, 50 };
	for (auto it{ crV.crbegin() }; it != crV.crend(); ++it) cout << *it << " ";
	cout << endl;


	
	int data[]{ 40, 50, 60, 80, 80 };
	auto itr  = begin(data);
	auto iend = end(data);
	for (auto it{ begin(data) }; it != end(data); ++it) cout << *it << " ";
	cout << endl;



	int alpha[]{ 40, 50, 60, 70, 80, 90 };
	vector <int> bravo{ 10, 20, 30, 40 };

	bravo.insert(bravo.begin(), begin(alpha) + 1, end(alpha) - 2);
	for (auto it{ begin(bravo) }; it != end(bravo); ++it) cout << *it << " ";
	cout << endl;

	int charlie[]{ 100, 200, 300 };
	bravo.insert(bravo.end(), begin(charlie), end(charlie));

	for (auto it{ begin(bravo) }; it != end(bravo); ++it) cout << *it << " ";
	cout << endl;

	bravo.insert(bravo.end() - bravo.size() / 2, 777);							/// insert in the middle of the vector
	for (auto it{ begin(bravo) }; it != end(bravo); ++it) cout << *it << " ";
	cout << endl;



	cout << endl;
}
void SET_MAP() {
	using namespace std;


	// red-black trees
		//https://www.youtube.com/watch?v=UKZzEYJ5nWM

	

	unordered_set<int> US{ 5 , 2 ,4 ,4 ,4 , 4, 4, 47823 };

	for (auto& i : US) cout << i << " ";




	//hash_set<String^> HS;

	
}
void ARRAY() {
	using namespace std;






	cout << endl;
}


int fact(int x) {
	if (x == 1) return 1;
	return x * fact(x - 1);
}

void APPLICATION_START() {
	setlocale(LC_ALL, "RU_ru");
	system("color 70");

	std::cout << "\n APPLICATION START\n\n";
	std::cout << "\tStatistic:\n\n";



	char str[] = "\tHello, world!";
	std::cout << str << std::endl;

	std::cout << "\t" << fact(6) << std::endl;


	if (0) {
		ITERATORS();
		STL_VECTORS0();
		STL_VECTORS1();
		POINTERS();
		STACK();
		CONSOLE_EXP();
		VS_DEBUGGER();
		SIZEOF_ARRAY();
		RANDOMIZER();
		TRY_CATCH();
	}
	ARRAY();



	//DEQUE();

	//SET_MAP();


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
// (+) STL: Vectors 0
// (+) STL: Vectors 1
// (+) STL: Iterators
// (+) STL: Stack: <stack> (link in WA)
// ----------------------------------------
// ( ) STL: Array
// ----------------------------------------
// ( ) STL: Deque
// ( ) STL: List
// ( ) STL: Map\Multimap
// ( ) STL: Set\Multiset
// ( ) hash-tables
// ( ) metanint.com Chapter 9. Containers
// 
// (+) VS: Debugger
// (+) sizeof
// (+) randomizer & diapasons
// (+) array without repeat
// (+) try-catch
// (+) try-catch, throw, cerr << e.what();
// (+) Pointers

// ( ) Threads (lnk WA)

// 
// ( ) Pro level: https://www.youtube.com/watch?v=4ZyOqCT494w&t=51s
// 
// ( ) Codestyle
//
/// BUGS:
//
// ( ) Component: the essence of the problem
// ( ) 