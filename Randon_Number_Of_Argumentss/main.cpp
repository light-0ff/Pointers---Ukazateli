#include<iostream>
using namespace std;

template < typename T >int sum(int n, T value, ...) //First parametr is number(количество) of arguments
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += *(&value + i);
	}
	return sum;
}

template < typename T >int sum2(T value ...)
{
	/*
	int sum2 = 0;
	int *psum = &value;
	do
	{
		sum2 += (*psum++);
		
	} while ((*psum) <= 34);
	*/
	int sum2 = 0;
	int* p_value = &value;
	while (*p_value != 0)
	{
		sum2 += *p_value++;
	}
	return sum2;
}

void main()
{
	cout << sum(6, 3, 5, 8, 13, 21, 34) << endl;
	cout <<	  sum2(3, 5, 8, 13, 21, 34, 0) << endl;

}