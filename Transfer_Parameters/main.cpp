#include<iostream>
using namespace std;

//#define by_pointer
#define by_reference
#ifdef by_pointer
template < typename T >void Exchange(T* a, T* b);
template < typename T >void Exchange2(T* a, T* b);
//template < typename T >void Xor(T *a, T *b); //шаблонный XOR
#endif /////////////
template < typename T >void Printo(T a, T b)
{
	cout << a << "\t" << b << endl;
}
#ifdef by_reference
void Exchange(int& a, int& b)
{
	int buffer = a;
	a = b;
	b = buffer;
}
#endif // by_reference

void main()
{
	setlocale(LC_ALL, "");
	int a = 2.05;
	int b = 3.14;
	int& ra = a;
	int& rb = b;
	ra = 44;
	rb = 33;
	cout << "Что имеем:"<<endl;
	Printo(ra, rb);	//cout << a << "\t" << b << endl;
	cout << "Буфферная смена:" << endl;
	Exchange(ra, rb);
	Printo(a, b);	//cout << a << "\t" << b << endl;
	/*

	cout << "Математическая смена:" << endl;
	Exchange2(&a, &b);
	Printo(a, b);	//cout << a << "\t" << b << endl;
	//cout << "XOR:" << endl;
	//Xor(&a, &b);
	Printo(a, b);	//cout << a << "\t" << b << endl;
	*/

}


#ifdef by_pointer
template < typename T >void Exchange(T* a, T* b)
{
	T buffer = *a;
	*a = *b;
	*b = buffer;
}

template < typename T >void Exchange2(T *a, T *b) // возможное переполнение в 1й операции.
{
	*a = *a + *b; // a = 3 + 2 = 5
	*b = *a - *b; // b = 5 - 2 = 3
	*a = *a - *b; // a = 5 - 3 = 2
}

template < typename T >void Xor(T *a, T *b)
{
	//XOR:
	*a = *a ^ *b; // a = 0000 0001 = 1
	*b = *b ^ *a; // b = 0011 0010 = 2
	*a = *a ^ *b; // a = 0011 0011 = 3
}
#endif // by_pointer