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
	//* - �������� ������������� (dereference operatot
	int *pb;
	int b = 3;
	b; //(int)
	pb; //(int*) ��������� �� int
	pb = &b;
	cout << pb << endl;
	cout << b << endl;
	//int - int
	//int * - ��������� �� int.
	// dpoble - double
	//double* - ��������� �� double.
#endif // pointer_BASICS
#ifdef declaration_of_pointers
	int a, b, c; //��������� ���� ���������� ����� ����������
	int *pa, *pb, *pc; // ��������� ���� ���������� ����� ����������
	int* pd, pe, pf; // �������� ���� ��������� �� int (pd), � ��� ���������� ���� int (pe � pf)

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