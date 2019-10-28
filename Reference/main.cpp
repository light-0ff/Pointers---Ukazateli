#include<iostream>
using namespace std;

void main()
{
	int a = 2;
	int& ra = a;
	ra = 333;
	cout << a << endl;
	cout << &a << endl;
	cout << &ra << endl;
}
