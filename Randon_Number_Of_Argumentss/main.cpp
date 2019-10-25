#include<iostream>
using namespace std;

int sum(int n, int value, ...) //First parametr is number(количество) of arguments
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += *(&value + i);
	}
	return sum;
}

int sum2(int value ...)
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