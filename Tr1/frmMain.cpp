#pragma region MACROS
#define DEF_SUM(type) type sum_##type (type a, type b) { \
			type result = a + b;						 \
			return result;								 \
		}

DEF_SUM(int);
DEF_SUM(float);
DEF_SUM(double);

#pragma endregion MACROS




#include "frmMain.h"
#include "SimpleTimer.h"
#include <Windows.h>
#include <iostream>
#include <ctime>
#include <span>
#include <vector>
#include <array>
#include <list>
#include <forward_list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <chrono>
#include <thread>
#include <functional>
#include <memory>



//using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

#pragma region void 
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

int Sum(int a, int b) {
	int c = a + b; int d = c; int e = d;
	int f = e;
	int g = e;
	return g;
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

void DATA_TYPES() {
	using namespace std;

	//Decimal dec = -15;				Console::WriteLine(dec);
	//short shr = -32765;				Console::WriteLine(shr);
	//unsigned short ushr = 10;		Console::WriteLine(ushr);

	//cout << endl;


	///// from std::
	//std::byte bt;
	//std::optional <int> opt;
	//std::array <int, 4> ara = { 10, 20, 30, 40 };

	//uint8_t ui8t;
	//uint16_t ui16t;
	//uint32_t ui32t;		uint_fast32_t chev;
	//uint64_t ui64t;		uint_fast64_t kavo;

	//UINT8  ui8;
	//UInt16 ui16;
	//UINT32 ui32;

	//unsigned long long ull{ 4096ULL };

	//int a{ 10 };
	//UINT64 av{ 1'234'567'890 };				cout << av << endl;		// C++14


	//int hex = 0x0A;			cout << hex << endl;
	//int bin = 0b0000;		cout << bin << endl;
	//bin = 0b0001;		cout << bin << endl;
	//bin = 0b0010;		cout << bin << endl;
	//bin = 0b0011;		cout << bin << endl;
	//bin = 0b0100;		cout << bin << endl;
	//bin = 0b0101;		cout << bin << endl;


	//cout << endl;
	//cout << endl;
	//cout << endl;



	//double aa = 33.3;
	//cout << (int)aa << endl;
	//cout << (float)aa << endl;
	//cout << (char)aa << endl;

	//int b = 34.567;
	//cout << b << endl;
	//cout << (float)b << endl;

	// all right, but warnings


	cout << endl;
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
	}
	catch (const std::exception& e) {
		cout << e.what() << endl;
		cout << "AAAaaaaaa!!1\n" << endl;
	}




	cout << endl;
}

template <typename T>				  T	 tempSum(T a, T b) { return a + b; }
template <typename T1, typename T2>   T1 tempSum2(T1 a, T2 b) { return a + b; }
template <typename T1, typename T2> void tempSum3(T1 a, T2 b) { std::cout << a << " " << b << std::endl; }
template <class T>					void tempSum4(T a) { std::cout << a << std::endl; }

template <typename T1, typename T2> T1* tMax(T1* a, T2* b) { return *a > *b ? a : b; }
template <typename T> const T* ttMax(const T* a, const T* b) { return *a > *b ? a : b; }
template <typename T> const T* ttMax(const T data[], unsigned size) {
	const T* result{};
	for (unsigned i{}; i < size; i++) {
		if (!result || data[i] > *result) result = &data[i];
	}
	return result;
}
void TEMPLATES() {
	using namespace std;

	cout << "sum " << tempSum(40, 1) << endl;
	cout << "sum " << tempSum(40.5, 0.5) << endl;
	//cout << "sum" << tempSum(40.5, 1) << endl;	// drop error
	cout << "sum " << tempSum2(40.0, 1) << endl;	// work!

	tempSum3("sum", 41);
	tempSum4("sum 41");

	int a = 20; int b = 41;
	double c[]{ 3.4, 41.0, 6.1, 4.3 };

	cout << "sum " << *tMax(&a, &b) << endl;

	cout << "sum " << *ttMax(&a, &b) << endl;
	cout << "sum " << *ttMax(&c, size(c)) << endl;

	cout << endl;
}

void POINTERS() {
	using namespace std;

	int a = 5;
	int* pa = &a;
	int* px = new int(a);
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
void POINTERS_ARITH() {
	using namespace std;

	const int SIZE = 5;
	int arr[SIZE] = { 10, 20, 30, 40, 50 };

	for (auto i : arr) cout << i << " "; cout << endl;
	int* pArr = arr;
	cout << *pArr << endl;
	cout << *(pArr + 1) << endl;
	//cout << *(pArr - 2) << endl;			// data from outside =\

	cout << endl;
}

inline int INLINE(int a, int b) { return a + b; }

int tSum(int a, int b) {
	using namespace std;

	this_thread::sleep_for(chrono::milliseconds(2000));

	cout << "thread ID: " << this_thread::get_id() << " =================\t Sum STARTED \t ================= " << endl;

	this_thread::sleep_for(chrono::milliseconds(5000));

	cout << "thread ID: " << this_thread::get_id() << " =================\t Sum STOPPED \t ================= " << endl;

	return a + b;
}
void SPEED_OF_PROGRAM() {

	SimpleTimer durator;

	//auto start = std::chrono::high_resolution_clock::now();


	using namespace std;

	int result;

	thread t([&result]() { result = tSum(2, 5);  });
	//result = tSum(2, 5);



	for (size_t i = 1; i <= 10; i++) {
		cout << "thread ID: " << this_thread::get_id() << "\tmain works\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}




	t.join();
	cout << "tSum Result = " << result << endl;


	/*auto end = chrono::high_resolution_clock::now();
	chrono::duration<float> duration = end - start;
	cout << "Duration: " << duration.count() << " sec" << endl;*/




	cout << endl;
}





#pragma endregion void 

#pragma region void STL_
int mmax(std::span<int> data)
{
	int result{ data[0] };
	for (auto value : data)
	{
		if (result < value) result = value;
	}
	return result;
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
	vector v15{ 1, 2, 3, 4, 5};		  // v15: [1][2][3][4][5]		for C++ 17+ & >

	vector gavka{ 10, 20, 30, 40, 50 };						// gavka:  [10][20][30][40][50]
	vector kogtic(gavka.begin() + 1, gavka.end() - 2);		// kogtic: [20][30]

	vector <int> v = v5;
	for each (int i in v) cout << i << " ";
	cout << endl;

	cout << v.size() << endl
		 << v.capacity() << endl;



	vector <int> sv = { 10, 20, 30, 40, 50 };
	cout << sv.front() << endl;
	cout << sv.back() << endl;
	cout << endl;


	for (auto i : v15) cout << i << " "; cout << endl;

	cout << endl;
}
void STL_VECTORS1() {
	using namespace std;

#pragma region ar1
	vector <int> ar1 = { 10, 20, 30,  40, 50 };//<--
								 // ^			    |
	ar1.push_back(60);	         // |			    |
	ar1.push_back(70);		     // |			    |
	ar1.emplace(ar1.begin() + 3, 35);			 // |
	ar1.emplace_back(75);						 // |	== .push_back(n);

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

	try { cout << ar2.at(4) << endl; }
	catch (const std::out_of_range& ex) { cout << ex.what() << endl; }
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
#pragma region C A B I N A є1
	cout << endl << "\t\t C A B I N A #1\n";
	vector <int> V;

	cout << "Enter size of vector <int>\n";
	int N; cin >> N; int n;

	cout << "Enter elements of this vector\n";
	for (int i = 0; i < N; i++) { cin >> n; V.push_back(n); }

	cout << "V: "; for (auto i{ V.rbegin()}; i != V.rend(); ++i) cout << *i << " ";

#pragma endregion
*/




#pragma region C A B I N A є2
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
void STL_ARRAY() {
	using namespace std;



	array <int, 5> ar1 = {};
	cout << "ar1: "; for (int i = 0; i < 5; i++) cout << ar1[i] << " "; cout << endl;

	array <int, 5> ar2 = { 10, 20, 30 };
	cout << "ar2: "; for (int i = 0; i < 5; i++) cout << ar2[i] << " "; cout << endl;

	array ar3{ 10, 20, 30 };											// for C++ 17 &>
	cout << "ar3: ";
	//for (auto i = 0; i < ar3.size(); i++) cout << ar3[i] << " ";
	for each (auto i in ar3) cout << i << " ";
	cout << endl;

	array < array <int, 5>, 3 > ar4 = { 0 };
	cout << "ar4: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			ar4[i][j] = i * 10 + j;
			cout << ar4[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;





	const unsigned n = 5;
	array<string, n> people{ "Tom", "Alice", "Kate", "Bob", "Sam" };

	for (int i{}; i < n; i++) cout << people[i] << endl; cout << endl;     // обращение через индексы

	for (auto person : people) cout << person << endl;					  // перебор последовательности
	cout << endl;

	array dungeon{ "Dungeon", "master", "Van", "Darkholme" };
	for (auto i : dungeon) cout << i << " ";
	cout << endl;

	array gym{ "Boss", "of", "the", "gym", "-", "Billy", "Herringhton" };
	for (auto i : gym) cout << i << " ";
	cout << endl << endl;



	array exp1{ 10, 20, 30, 40, 50, 60, 70, 80 };
	cout << exp1.size() << endl;
	cout << exp1.at(5) << endl;
	cout << exp1.front() << endl;
	cout << exp1.back() << endl;
	exp1.fill(10);
	for (auto i : exp1) cout << i << " ";
	cout << endl;



	array exp2 = exp1;
	for (auto i : exp2) cout << i << " ";
	cout << endl;



	cout << (exp1 == exp2) << endl;						// 1
	cout << boolalpha << (exp1 == exp2) << endl;		// true



	cout << endl;
}
void STL_LIST() {
	using namespace std;



	list <int> list1;
	list <int> list2(5);
	list <int> list3(5, 2);
	list <int> list4{ 10, 20, 30, 40, 50 };
	list <int> list5 = { 10, 20, 30, 40, 50 };
	list <int> list6(list4);
	list <int> list7 = list4;



	for (int i : list4) cout << i << " "; cout << endl;
	for (auto it = list4.begin(); it != list4.end(); ++it) cout << *it << " "; cout << endl;
	cout << endl;



	list <int> l1{ 10, 20, 30, 40, 50 }; cout << l1.size() << endl; cout << boolalpha << l1.empty() << endl; cout << endl;
	l1.clear();						     cout << l1.size() << endl; cout << boolalpha << l1.empty() << endl; cout << endl;



	l1.resize(4);				 		 for (auto i : l1) cout << i << " "; cout << endl;
	l1.resize(8, 10);			 		 for (auto i : l1) cout << i << " "; cout << endl;
	l1.resize(5, 3);			 		 for (auto i : l1) cout << i << " "; cout << endl;
	l1.assign({ 100, 200, 300 });		 for (auto i : l1) cout << i << " "; cout << endl;
	l1.assign(10, 4);			 		 for (auto i : l1) cout << i << " "; cout << endl;



	l1.assign(1, 1);		      		 for (auto i = 2; i <= 10; i++) l1.push_back(i);
	auto start = l1.begin();	  		 for (auto i = 1; i < 5; i++) ++start;
	l1.assign(start, l1.end());   		 for (auto i : l1) cout << i << " "; cout << endl;
	cout << endl;



	list <int> l2(5, 0);		 		 for (auto i : l2) cout << i << " "; cout << endl;
	l1.swap(l2);				 		 for (auto i : l2) cout << i << " "; cout << endl;
	cout << endl;



	list <int> l3(1, 50);		 		 for (auto i : l3) cout << i << " "; cout << endl;
	l3.push_back(60);			 		 for (auto i : l3) cout << i << " "; cout << endl;
	l3.push_front(40);           		 for (auto i : l3) cout << i << " "; cout << endl;
	l3.emplace_back(70);         		 for (auto i : l3) cout << i << " "; cout << endl;
	l3.emplace_front(30);        		 for (auto i : l3) cout << i << " "; cout << endl;


	auto it3s = l3.begin(); 			 for (auto i = 1; i <= 4; i++) ++it3s;
	l3.insert(it3s, 65);        	     for (auto i : l3) cout << i << " "; cout << endl;

	it3s = l3.begin();				  	 for (auto i = 1; i <= 2; i++) ++it3s;
	l3.insert(it3s, 3, 44);			     for (auto i : l3) cout << i << " "; cout << endl;

	auto pos = l3.begin();				 for (auto i = 1; i <= 2; i++) ++pos;
	l3.insert(pos, { 41, 42, 43 });      for (auto i : l3) cout << i << " "; cout << endl;


	list l4{ 10, 20, 30, 40 };
	list l5{ 50, 60, 70, 80 };
	l5.insert(
		l5.cbegin(),
		l4.begin(),
		l4.end()
	);									 for (auto i : l5) cout << i << " "; cout << endl;



	l3.pop_back();						 for (auto i : l3) cout << i << " "; cout << endl;
	l3.pop_front();						 for (auto i : l3) cout << i << " "; cout << endl;
	auto p = l3.begin(); p++; p++; p++;
	l3.erase(p);						 for (auto i : l3) cout << i << " "; cout << endl;

	auto pb = l3.begin(), pe = l3.end();
	pb++; pb++; pb++; pb++; pe--; pe--; pe--;
	l3.erase(pb, pe);					 for (auto i : l3) cout << i << " "; cout << endl;

	l3.clear();							 for (auto i : l3) cout << i << " "; cout << endl;


	

	cout << endl;
}
void STL_FORWARD_LIST() {
	using namespace std;



	forward_list <int> fl1;

	fl1 = { 10, 20, 30, 40, 50, 60 };
	cout << fl1.front() << endl;

	auto it = fl1.begin();
	it++;
	for (int i = 2; i < 5; i++) it++;
	cout << *it << endl;

	for (auto i : fl1) cout << i << " ";
	cout << endl;



	forward_list <int> fl2{ 10, 20, 30, 40, 50 };
	auto prev = fl2.before_begin();
	auto end = fl2.end();

	while (++prev != end) cout << *prev << " ";
	cout << endl;



	cout << endl;
}
void STL_DEQUE() {
	using namespace std;

	deque <int> dq1 = { 10, 20, 30, 40 };
	deque dq2{ 60, 70, 80, 90 };
	dq1.push_back(45);
	for (auto i : dq1) cout << i << endl;

	cout << endl;
}
void STL_QUEUE() {
	using namespace std;

	queue <int> q1;
	q1.push(10); q1.push(20); q1.push(30); q1.push(40); q1.push(50);

	cout << q1.front() << endl;

	auto a = q1._Get_container();
	cout << a.at(3) << endl;

	while (!q1.empty()) { cout << q1.front() << " "; q1.pop(); }


	cout << endl;
}
void STL_STACK() {
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
void STL_PRIORITY_QUEUE() {
	using namespace std;


	priority_queue <string> pq1;
	pq1.push("Alpha");
	pq1.push("Golph");
	pq1.push("Charlie");
	pq1.push("Hotel");
	pq1.push("Bravo");

	deque <string> casino(pq1.size());

	while (!pq1.empty()) { casino.push_front(pq1.top()); pq1.pop(); }
	for each (auto i in casino) cout << i << " ";
	cout << endl;



	cout << endl;
}
void STL_SETS() {
	using namespace std;

	set <int> s1;
	set s2{ 10, 20, 30, 40, 50 };
	set s3{ 40, 40, 10, 10, 10, 10, 50, 30 }; s3.insert(20);

	for (auto i : s2) cout << i << " "; cout << endl;
	for (auto i : s3) cout << i << " "; cout << endl;
	cout << s3.size() << endl;
	cout << endl;


	cout << boolalpha << s2.count(10) << endl;
	cout << boolalpha << s2.contains(10) << endl;
	cout << boolalpha << s2.count(11) << endl;
	cout << boolalpha << s2.contains(11) << endl;






	unordered_set us1 = { 5, 2, 2, 2, 2, 2, 2, 40, 40, 19, 10 };
	for (auto i : us1) cout << i << " "; cout << endl;


	cout << endl;
}
void STL_MAPS() {
	using namespace std;



	map <string, unsigned> prod1
	{
		pair <string, unsigned> {"bread", 30}, pair{"milk", 80}, pair{"apple", 60}
	};
	map <string, unsigned> prod2
	{
		{ "bread", 30 },
		{ "milk",  80 },
		{ "apple", 60 }
	};





	map <string, unsigned> dungeon;
	dungeon["F: fisting"] = 300;
	dungeon["A: lockerroom wrestling"] = 750;
	dungeon["Z: spanking"] = 100;


	cout << "Stick your finger in my ass for \t" <<
		dungeon["F: fisting"] << " bucks" << endl;
	cout << "Buddy, you choose the wrong door \t" <<
		dungeon["A: lockerroom wrestling"] << " bucks" << endl;
	cout << endl;

	for (const auto& [service, price] : dungeon) cout << service << ": \t\t" << price << endl;
	cout << endl;

	for (const auto& i : dungeon) cout << i.first << ": \t\t" << i.second << endl;
	cout << endl;




	map <unsigned, string> products;

	products[2] = "Kogtic";
	products[1] = "Gavka";
	products[3] = "Babka";
	products[4] = "Murchalka";

	for (const auto i : products) cout << i.first << ":\t" << i.second << endl; cout << endl;

	products.erase(3);					//  Delete only for KEY
	for (const auto i : products) cout << i.first << ":\t" << i.second << endl; cout << endl;


	unordered_map <unsigned, string> um1;
	um1[1] = "Gavka";
	um1[2] = "Kogtic";
	um1[3] = "Babka";
	um1[4] = "Murchalka";

	unordered_map<unsigned, string>::const_iterator cium1 = um1.cbegin();
	for (auto it = cium1; it != um1.end(); ++it) cout << it->second << endl; cout << endl;



	cout << endl;
}
void STL_SPAN() {
	using namespace std;


	/*int mmax(const std::vector<int>&);
	int mmax(const int[], size_t);*/

	int mmax(span<int>);				// prototype


	vector<int> nums1{ 1, 2, 3, 4, 5 };
	cout << mmax(nums1) << endl;   // 5

	int nums2[]{ 4, 5, 6, 7, 8 };
	cout << mmax(nums2) << endl;   // 8



	cout << endl;
}
void STL_ITERATORS() {
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
	auto itr = begin(data);
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
void STL_SET_MAP() {
	using namespace std;


	// red-black trees
		//https://www.youtube.com/watch?v=UKZzEYJ5nWM


}
#pragma endregion void STL_

#pragma region void THREADS_

void th1Work() {
	SimpleTimer Duration("th1Work");
	using namespace std;

	cout << "START th1Work" << endl;

	for (size_t i = 0; i < 10; i++) {
		cout << "Thread ID: " << this_thread::get_id() << " \tth1Work" << endl;
		this_thread::sleep_for(chrono::milliseconds(1000));
	}

	cout << "END th1Work" << endl;
}
void THREADS_1() {
	using namespace std;
	SimpleTimer Duration; Duration.Name = "THREADS_1";



	thread th(th1Work);
	thread th2(th1Work);
	//th.detach();				// thread will be autonomic and make work after destruction of THREADS_1()


	cout << "START THIS" << endl;

	for (size_t i = 0; i < 10; i++) {
		cout << "Thread ID: " << this_thread::get_id() << " \tTHREADS_1" << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	cout << "END THIS" << endl;


	th.join();				// make work after nain logic
	th2.join();

	cout << endl;
}

void th2Work(int a, int b) {
	SimpleTimer Duration("th2work");
	using namespace std;

	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "thread ID: " << this_thread::get_id() << " =================\t th2Work STARTED \t ================= " << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "a + b = " << a + b << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "thread ID: " << this_thread::get_id() << " =================\t th2Work STOPPED \t ================= " << endl;

}
void THREADS_2() {
	SimpleTimer Duration("THREADS_2");
	using namespace std;

	thread th(th2Work, 10, 20);


	cout << "START THREADS_2" << endl;

	/*for (size_t i = 0; i < 10; i++) {*/
	for (;;) {
		cout << "Thread ID: " << this_thread::get_id() << " \tTHREADS_2" << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	cout << "END THREADS_2" << endl;

	th.join();


	cout << endl;
}

void THREADS_3() {
	using namespace std;





	cout << endl;
}


#pragma endregion void THREADS_

#pragma region void ALGORITHMS
int fact(int x) {
	if (x == 1) return 1;
	return x * fact(x - 1);
}

void FIZZBUZZ() {
	using namespace std;

	for (auto i = 0; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 != 0) cout << "Fizz";
		else if (i % 5 == 0 && i % 3 != 0) cout << "Buzz";
		else if (i % 5 == 0 && i % 3 == 0) cout << "FizzBuzz";
		else							   cout << i;
		cout << "\t";

		if (i % 20 == 0) cout << endl;
	}
	cout << endl;

	cout << endl;
}

void FACTORIAL() {
	char str[] = "\tHello, world!";
	std::cout << str << std::endl;
	std::cout << "\t" << fact(6) << std::endl;
}

const int AR_SIZE = 8;
int HOAR_PART(int arr[], int left, int right) {
	using namespace std; 

	int pivot = arr[(left + right) / 2];			
	while (left <= right) {
		while (arr[left] < pivot) left++; 
		while (arr[right] > pivot) right--;
		if (left <= right) {
			cout << "l:" << arr[left] << " p:" << pivot << " r:" << arr[right] << endl << endl;


			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;

			for (int i = 0; i < AR_SIZE; i++) cout << arr[i] << " "; cout << endl;

			left++;
			right--;
		}
	}
	cout << left << endl;
	return left;
}

void HOAR(int arr[], int start, int end) {
	if (start >= end) return;
	int rightStart = HOAR_PART(arr, start, end);
	HOAR(arr, start, rightStart - 1);
	HOAR(arr, rightStart, end);
}

void HOAR(int arr[]) { HOAR(arr, 0, AR_SIZE - 1); };

#pragma endregion void ALGORITHMS

#pragma region void LAMBDA
void lfunc1(float a) { if ((int)a % 2 == 0) std::cout << a << " "; }
void lfunc2(float a) { if ((int)a % 3 == 0) std::cout << a << " "; }
void lfunc3(float a) { std::cout << a * 2 << " "; }
void lfunc4(float a) { std::cout << a * 3 << " "; }

using vfunc = std::vector <std::function <void(float)>>;
using vlink = std::vector <float>&;
void lmain(vlink V, vfunc F) { for (auto _ : F) { for (auto __ : V) _(__); std::cout << std::endl; } }

void LAMBDA_1() {
	using namespace std;



	//vector vec { 9, 10, 11, 12, 13 ,14, 15, 16 ,17, 18 ,19, 20, 21 };
	vector <float> vec;
	for (float _ = 9.0f; _ <= 21.0f; _ += 0.5f) vec.push_back(_);
	for (auto _ : vec) cout << _ << " "; cout << endl;

	vfunc vecf = { lfunc1, lfunc2, lfunc3, lfunc4 };
	lmain(vec, vecf);



	cout << endl;
}



class Zulu
{
public:
	Zulu() { Msg(); }
	~Zulu() {}


	int a = 11;

	void Msg() { std::cout << "W E L C O M E !" << std::endl; }
	void Lambda() { 
		auto f = [this]() {
			this->Msg();
		};
		f();

	}

private:

};
int d = 15;

void LAMBDA_2() {
	using namespace std;
	





	int a = 55;
	int b = 10;
	int c = 10;


			//[&]
	auto f = [=]() mutable
	{
		cout << a << endl;
		a = 1331;
		d = 10;

		c = 0;

	};

	f();


	auto f2 = []() mutable->int {

		return 0.0f;
	};
	auto res = f2();





	Zulu Z;	
	Z.Msg();


	cout << endl;
}
#pragma endregion LAMBDA

#pragma region SMART_POINTERS
template <typename T> class smart_pointer {
public:
	smart_pointer(T* ptr) { ptr_ = ptr; }
	~smart_pointer() { delete ptr_; }

	T& operator* () { return *ptr_; }

private:
	T* ptr_;

};
void SMART_POINTER_1() {
	using namespace std;

	smart_pointer<int> sp1 = new int(100);
	*sp1 = 105;
	cout << *sp1 << endl;

	cout << endl;
}

void SMART_POINTER_2() {
	using namespace std;



	//unique_ptr<int> p1(new int(5));
	//unique_ptr<int> p2;

	//p2 = move(p1);
	//p2.swap(p1);

	//int *p = p2.get();
	//int *p = new int(5);
	//unique_ptr<int> p3(p);

	//p3.reset();
	//p3.release();

	shared_ptr<int> p1(new int(5));
	shared_ptr<int> p2(p1);


	cout << endl;
}

struct Actor {
public:
	Actor() { std::cout << "Spawn! " << std::endl; };
	~Actor() { std::cout << "Dead! " << std::endl;  };
	void DoWork() { std::cout << "Do some job! " << std::endl; }
private: 
};
void run(Actor* ptr) {
	if (ptr) ptr->DoWork();
	else std::cout << "An actor was expected! " << std::endl;
}
void SMART_POINTER_3() {
	using namespace std;



	//auto ptr = make_unique<Actor>();
	shared_ptr<Actor> ptr = make_shared<Actor>();
	run(ptr.get());
	// auto ptr2 = move(ptr);		// for unique
	auto ptr2 = ptr;
	run(ptr2.get());
	run(ptr.get());



	cout << endl;
}

void SMART_POINTER_4() {
	/// https://www.youtube.com/watch?v=sM4i-cNJUJc
}
#pragma endregion SMART_POINTERS





#pragma region OOP

#pragma region 035
const unsigned short
RANK_SLAVE			= 0,
RANK_SMART_ASS		= 1,
RANK_COLLEGE_BOY	= 2,
RANK_MASTER			= 3,
RANK_DUNGEON_MASTER = 4,
RANK_FULL_MASTER	= 5,
RANK_GEY_LORD	    = 6;

struct Gey {
public:
	Gey() : rank_(RANK_SLAVE) {
		std::cout << "Constructed(default) " << name << " rank: " << rank_ << std::endl;
	};

	Gey(Gey& copy) : name(copy.name), rank_(copy.rank_) {
		std::cout << "Constructed(copy) " << name << " rank: " << rank_ << std::endl;
	};

	Gey(std::string name) : name(name), rank_(RANK_SLAVE) {
		std::cout << "Constructed(" << name << ") rank: " << rank_ << std::endl;
	};

	~Gey() {
		std::cout << "~Destructed " << this->name << " " << std::endl;
	};

	Gey& operator=(const Gey& copy) { 
		std::cout << "Constructed(copy-op)" << std::endl;
		return *this;
	};


	// ??
	Gey& operator=(Gey&& copy) noexcept {
		return *this;
	}
	

public: 
	std::string name = "slave";
	void setRank(unsigned short rank) { rank_ = rank; }
	int  getRank() { return rank_; }

private:
	unsigned short rank_ = RANK_SLAVE;

};

void F_0_3_5() {
	using namespace std;



	Gey Billy("Billy");
	Billy.setRank(RANK_GEY_LORD);
	cout << Billy.name << " " << Billy.getRank() << endl;
	cout << endl;
	//Billy = Billy;
	

	Gey Van(Billy);
	Van.name = "Van";
	cout << Van.name << " " << Van.getRank() << endl;
	cout << endl;



	Gey Mark = Van;
	Mark.setRank(RANK_MASTER);
	Mark.name = "Mark";
	cout << Mark.name << " " << Mark.getRank() << endl;
	cout << endl;



	cout << endl;
}
#pragma endregion 035



class Animal {
private:
	int x_, y_;
	int* id_;



public:
	Animal()					 : x_(0), y_(0) { id_ = new int(0);  }
	Animal(int id, int x, int y) : x_(x), y_(y) { id_ = new int(id); }
	Animal(Animal& copy) { copy_fields_(copy); }
	~Animal() { delete id_; }

	Animal& operator=(Animal& copy) { copy_fields_(copy); return *this;	}

	

public:
	int get_x() { return x_; } void set_x(int x) { x_ = x; }
	int get_y() { return y_; } void set_y(int y) { y_ = y; }
	int get_id() { return *id_; }

	void info() {
		using namespace std;
		cout <<
			"Animal: " << *id_ << endl << 
			"coordinates: " << 
			get_x() << ":" << get_y() << endl << 
			endl;
	}


private:
	void copy_fields_(Animal& copy) {
		x_ = copy.get_x(); y_ = copy.get_y();
		id_ = new int(copy.get_id());
	}


	
};


void OOP_1() {
	using namespace std;

	unsigned short c = 1;

	Animal Ex1;				Ex1.info();
	Animal Ex2(c, 10, 20);	Ex2.info();
	Animal Ex3 = Ex2;		Ex3.info();
	Animal Ex4(Ex3);		Ex4.info();

	cout << endl;
}





#pragma endregion OOP










void MACROS() {
	using namespace std;



#define PI 3.14159			// write in the global region (f.e. begin of file)
	//...
	cout << PI << endl;



	// PI = 3;				// don't
	//int* pi = &PI;		// don't



//#undef PI
	cout << PI << endl;

#undef PI
	//cout << PI << endl;
	cout << endl;





#define MAX(a, b) a >= b ? a : b
	int m = MAX(10, 20); cout << m << endl;



#define SWAP(type, a, b) type tmp = a; a = b; b = tmp;
	//int num1 = 10, num2 = 20;		cout << num1 << " : " << num2 << endl;
	//SWAP(int, num1, num2);			cout << num1 << " : " << num2 << endl;

	 //SWAP(float, num1, num2);		cout << num1 << " : " << num2 << endl;	// we can't use SWAP one by one. Error
#undef SWAP

#define SWAP(type, a, b) \
	type tmp = a;		 \
	a = b;				 \
	b = tmp;

	int num3 = 10, num4 = 20;		cout << num3 << " : " << num4 << endl;
	SWAP(int, num3, num4);			cout << num3 << " : " << num4 << endl;
#undef SWAP




#define PRINT_VALUE(_value) printf("Value of %s is %d \n", #_value, _value);
	int x = 5;
	PRINT_VALUE(x);
#undef PRINT_VALUE

#define PRINT_VALUE(_value) std::cout << "Value of " << #_value " is " << _value << endl;
	int y = 5;
	PRINT_VALUE(y);
#undef PRINT_VALUE


#define MACRO() do {			    \
    cout << "Do Something" << endl;	\
    cout << "Do 1 2 3 4 5" << endl; \
  } while(0)

	if (1) MACRO();
#undef MACRO


	int a = sum_int(10, 30);
	cout << a << endl;
	cout << endl << endl << endl;








#define DEBUG			// uncomment me



#ifdef DEBUG
	cout << "Cicle start" << endl;
#endif // DEBUG	

	for (auto i = 0; i < 10; i++) cout << i << " "; cout << endl;

#ifdef DEBUG
	cout << "Cicle finish" << endl;
#endif // DEBUG


#ifdef DEBUG
	cout << "Debug is set" << endl;
#else
	cout << "Debug is not set" << endl;
#endif // DEBUG




#define DEB 5



#if DEB < 4
	cout << "Gavka" << endl;
#elif DEB == 5
	cout << "Kogtic" << endl;
#else
	cout << "Babka" << endl;
#endif // DEB




	/*
		#include Ч вставл€ет текст из указанного файла
		#define Ч задаЄт макроопределение (макрос) или символическую константу
		#undef Ч отмен€ет предыдущее определение
		#if Ч осуществл€ет условную компил€цию при истинности константного выражени€
		#ifdef Ч осуществл€ет условную компил€цию при определЄнности символической константы
		#ifndef Ч осуществл€ет условную компил€цию при неопределЄнности символической константы
		#else Ч ветка условной компил€ции при ложности выражени€
		#elif Ч ветка условной компил€ции, образуема€ сли€нием else и if
		#endif Ч конец ветки условной компил€ции
		#line Ч препроцессор измен€ет номер текущей строки и им€ компилируемого файла
		#error Ч выдача диагностического сообщени€
		#pragma Ч действие, завис€щее от конкретной реализации компил€тора.

		#define  #error   #import   #pragma
		#elif	 #if	  #include  #undef
		#else 	 #ifdef	  #line	    #using
		#endif	 #ifndef


	*/




	cout << endl;
}
void MEMORY_1() {
	SimpleTimer t ("MEMORY_1");
	using namespace std;	



}






void CODE() {
	if (0) {
		CONSOLE_EXP();
		VS_DEBUGGER();

		STL_ITERATORS();
		STL_VECTORS0();
		STL_VECTORS1();
		STL_ARRAY();
		STL_LIST();
		STL_FORWARD_LIST();
		STL_DEQUE();
		STL_STACK();
		STL_QUEUE();
		STL_PRIORITY_QUEUE();
		STL_SETS();
		STL_MAPS();
		STL_SPAN();

		SPEED_OF_PROGRAM();


		POINTERS();
		POINTERS_ARITH();
		INLINE(2, 3);
		TEMPLATES();

		THREADS_1();
		THREADS_2();

		LAMBDA_1();
		LAMBDA_2();

		SMART_POINTER_1();
		SMART_POINTER_2();
		SMART_POINTER_3();

		DATA_TYPES();
		SIZEOF_ARRAY();
		RANDOMIZER();
		TRY_CATCH();


		FACTORIAL();
		FIZZBUZZ();
		MACROS();


		F_0_3_5();
		OOP_1();


		int Ar[] = { 2, 8, 1, 7, 6, 3, 5, 4 };
		for (auto i = 0; i < AR_SIZE; i++) std::cout << Ar[i] << " ";
		std::cout << std::endl;
		HOAR(Ar);
	}

	THREADS_3();			// ...
	SMART_POINTER_4();		// ...


	OOP_1();

	//MACROS();
	//MEMORY_1();
	//STL_LIST();
	//STL_SET_MAP();
}
void APPLICATION_START() {
	setlocale(LC_ALL, "RU_ru");
	Console::SetWindowSize(60, 30);
	Console::Title = L"C++\\CLI training";
	system("color 70");

	SimpleTimer Duration("main");

	std::cout << "\n APPLICATION START\n\n";
	std::cout << "\tStatistic:\n\n";

	CODE();

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
void APPLICATION_START_PARAMS(int argc, char* argv[]) {
	using namespace std;
	cout << " PARAMETHERS:\n\t";
	for (int i = 0; i < argc; i++) cout << argv[i] << endl;
	cout << endl;
}
void APPLICATION_START_PARAMS(array<String^>^ args) {
	for each (auto i in args) Console::WriteLine(" " + i + "\n");
}

/// ver 0.0.0
int main(array<String^>^ args) {	// int argc, char* argv[]
	// APPLICATION_START_PARAMS(argc, argv);
	APPLICATION_START_PARAMS(args);
	APPLICATION_START();	
	APPLICATION_FORM();
	APPLICATION_END();
	return 0;
}



/// TODO:

// (+) MVP
// (+) GIT Connection
// (+) GIT Make "Develop" branch
// 
// (+) CONSOLE
// 
// (+) STL: Vectors 0
// (+) STL: Vectors 1
// (+) STL: Iterators
// (+) STL: Array			// How we can post in function?
// (+) STL: Deque
// (+) STL: List
// ( ? ) STL: Stack
// (+) STL: Queue
// (+) STL: Priority_queue 
// (+) STL: Map\Multimap
// (+) STL: Set\Multiset
// (+) STL: Span
// (+) metanint.com Chapter 9. Containers
// ( ) Hash-tables
// ( ) Red-black trees

// 
// (+) Arithmetic of pointers 
// (...) Preprocessor directives
// (+) Macros C++
// (+) Templates <typename T>
// (+) Variable data types



// (+) OOP: Classes
// (..) OOP: Access levels: public, private, protected
// ---------------------------------------
// ( ) OOP: Inheritance: Multiple, Diamond
// ---------------------------------------
// ( ) OOP: Polymorphism: static, dynamic, overloading of funcs, virt methods/tables
// ( ) OOP: Incapsulation
// (..) Rule 0, 3, 5: 3, 5, 0

// (..) Smart-pointers: smart, auto, unique, shared, WEAK
// ( ) Operators overload   
// 
// ( ) Type casts: static_cast, const_cast, dynamic_cast, reinterp_cast 
// 
// (+) Speed of progran
// ( ) Threads (lnk WA)
// (+) Threads: 
// (+) Threads: th with paramethers
// (+) Threads: th with lamda-function
// ( ) Threads: SimpleCode 1, 2, 3, 4, 5, 6, 7, 8, 9, 10	https://www.youtube.com/watch?v=NawpxG81RRk&list=PLQOaTSbfxUtAc_RpyDiWCHq0YTzLtVSD0
// 
// ( ) MEMORY_1 https://www.youtube.com/watch?v=54zVRi3XWB4&t=796s
// 
// (+) VS: Debugger
// (+) sizeof
// (+) randomizer & diapasons
// (+) array without repeat
// (+) try-catch
// (+) try-catch, throw, cerr << e.what();
// (+) Pointers
// (+) Lambda Functions
// (+) anonimic function
// ( ) atomic
//
// 
// (...) ALGORITHMS: HOAR_SORT
// ( ) ALGORITHMS: 
// 
// 
// ( ) Pro level:	 https://www.youtube.com/watch?v=4ZyOqCT494w&t=51s
// ( ) Bog-Imperator https://www.youtube.com/watch?v=3nlHe9mdkp4&t=1064s
// ( ) GRAPHIC!!!!   https://www.youtube.com/watch?v=z_WWQYh6Ewg
// ( ) Selection of platform for GUI
// ( ) Double bufferized
// 
// ( ) Codestyle	 https://habr.com/ru/articles/841552/
// ( ) Standarts C++ https://www.youtube.com/watch?v=NRjgfzYWSr0
//
//
// ( ) Yandex https://www.youtube.com/watch?v=LvNsartxgrc
//
//
/// BUGS:
//
// ( ) Component: the essence of the problem
// ( ) 


/// Vocabulary
// “окен Ч это минимальна€ единица синтаксиса €зыка программировани€.
// # - директивы препроцессора.