#include<iostream>
using namespace std;

//#define pointer_BASICS
//#define declaration_of_pointers
#define pointers_and_Arrays
void main()
{
	setlocale(LC_ALL, "");
#ifdef pointer_BASICS
	int a = 2;
	int *pa = &a; //pa - pointer to a
	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;
	//* - оператор разименования (dereference operatot
	int *pb;
	int b = 3;
	b; //(int)
	pb; //(int*) указатель на int
	pb = &b;
	cout << pb << endl;
	cout << b << endl;
	//int - int
	//int * - указатель на int.
	// dpoble - double
	//double* - указатель на double.
#endif // pointer_BASICS
#ifdef declaration_of_pointers
	int a, b, c; //обявление трех переменных одним выражением
	int *pa, *pb, *pc; // обявление трех указателей одним выражением
	int* pd, pe, pf; // обявляем один указатель на int (pd), и две переменные типа int (pe и pf)

#endif // declaration_pointers
	
	const int n = 5;
	short Arr[n] = { 3, 5, 8, 13, 21 };
	cout << *Arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(Arr + i) << "\t";
	}
	cout << endl;
}

/*
type function(parameter1, parametr2, ...)
{

}


*/