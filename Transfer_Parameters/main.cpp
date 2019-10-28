#include<iostream>
using namespace std;

void Exchange(int* a, int* b);
void Exchange2(int* a, int* b);
void Printo(int a, int b)
{
	cout << a << "\t" << b << endl;
}

void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int b = 3;
	Printo(a, b);	//cout << a << "\t" << b << endl;

	Exchange(&a, &b);
	Printo(a, b);	//cout << a << "\t" << b << endl;


	Exchange2(&a, &b);
	Printo(a, b);	//cout << a << "\t" << b << endl;
}

void Exchange(int* a, int* b)
{
	int buffer = *a;
	*a = *b;
	*b = buffer;
}
/*
*/
void Exchange2(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	/*
	//тут находится копипаста
	*a ^= *b; // a = 3 - 2 = 1
	*b ^= *a; // b = 2 + 1 = 3
	*a ^= *b; // a = 1 ? 3 = 3 - 1 = 2
	*/
}
