#include <iostream>

using namespace std;

int main() {

	// --------------- Pointers --------------- :

	// int myVar; 
	// foo = &myVar; 

	// myvar = 25;
	// foo = &myvar;
	// bar = myvar;

	//	baz = *foo;

	int* number;
	char* character;
	double* decimals;

	/*int firstvalue, secondvalue;
	int* mypointer;

	mypointer = &firstvalue;
	*mypointer = 10;
	mypointer = &secondvalue;
	*mypointer = 20;
	cout << "firstvalue is " << firstvalue << '\n';
	cout << "secondvalue is " << secondvalue << '\n';*/

	int firstvalue = 5, secondvalue = 15;
	int* p1, * p2;

	p1 = &firstvalue;  
	p2 = &secondvalue; 
	*p1 = 10;          
	*p2 = *p1;         
	p1 = p2;           
	*p1 = 20;          

	cout << "firstvalue is " << firstvalue << '\n';
	cout << "secondvalue is " << secondvalue << '\n';

	// int* p1, p2;
	p1++;

	// --------------- Arrays --------------- :
	// int number = 3;

	// int number = 3, 5 ;
	int numbers[2] = {3, 5};

	int arr[5] = { 1, 2, 3, 4, 5 };

	//int n;
	//cin >> n;
	//int invalidArr[n];

	cout << numbers[0];

	//int anotherArr[7] = { 6, 7 };

	int anotherArr[3];
	cin >> anotherArr[0];
	cin >> anotherArr[1];
	anotherArr[2] = 2;

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}

	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}

	int myarray[20];
	int* mypointer;

	 // mypointer = myarray;

	 // myarray = mypointer;

	int numbers[5];
	int* p;
	p = numbers;  *p = 10;
	p++;  *p = 20;
	p = &numbers[2];  *p = 30;
	p = numbers + 3;  *p = 40;
	p = numbers;  *(p + 4) = 50;
	for (int i = 0; i < 5; i++) {
		cout << numbers[i] << ", ";
	}

	return 0;
}