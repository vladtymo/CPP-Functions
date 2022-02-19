#include <iostream>
using namespace std;

// Function Prototype: return type, name, arguments
void mySwap(int a, int b);
void showArray(int arr[], const int size);
void incrementArray(int arr[], const int size, int value = 1);
int getSumm(int arr[], const int size);

int main()
{
	int a = 10;
	int b = 20;
	cout << "a = " << a << ", b = " << b << endl;
	mySwap(a, b); // при модифікації змінних у функції - оригінали не змінюються
	cout << "a = " << a << ", b = " << b << endl;

	const int size = 10;
	int arr[size] = { 3, 5, 1, 7, -4, 0, 9, 5, 6, 1 };

	showArray(arr, size);
	incrementArray(arr, size, 3); // при модифікації елементів масива у функції - змінюється оригінал
	showArray(arr, size);
	incrementArray(arr, size); // value by default = 1
	showArray(arr, size);

	cout << "Summ of elements = " << getSumm(arr, size) << endl;

	return 0;
}

void mySwap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "(in func) a = " << a << ", b = " << b << endl;
}

void showArray(int arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void incrementArray(int arr[], const int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] += value;
	}
}

int getSumm(int arr[], const int size)
{
	int summ = 0;
	for (int i = 0; i < size; i++)
	{
		summ += arr[i];
	}
	return summ;
}