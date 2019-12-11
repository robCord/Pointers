#include <iostream>

using namespace std;

void swap(int* a, int* b);

void main()
{
	int a = 5;
	int b = 6;

	cout << "a = " << a << " b = " << b << endl;

	swap(&a, &b);

	cout << "a = " << a << " b = " << b << endl;
}

void swap(int* a, int* b)
{
	int temp = (*a);
	(*a) = (*b);
	(*b) = temp;
}