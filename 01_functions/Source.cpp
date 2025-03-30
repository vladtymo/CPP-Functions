#include <iostream>
using namespace std;

void showMessage()
{
	cout << "Hello, World!" << endl;
}

// Function Prototype: return type, name, arguments
void showStars(int count);
double getSumm(double a, double b);
double getPow(double number, int pow = 2); // write default values in prototype only

int main()
{
	showMessage();

	// function invokation
	showStars(10);
	showStars(4);

	int number = 100;
	number += getSumm(5, 12); // після завершення функції результат підставляється на місце її виклику
	cout << "Result: " << number << endl;
	cout << "55 + 44 = " << getSumm(55, 44) << endl;
	
	// argument default values
	cout << "5^3 = " << getPow(5, 3) << endl;
	cout << "4^2 = " << getPow(4) << endl; // pow by default = 2

	return 0; // no errors
}

// return_type name(arguments)
// {
//	   function body
// }

// create function
void showStars(int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << "*";
	}
	cout << endl;
}

// return type
double getSumm(double a, double b)
{
	double result = a + b;
	//cout << "Result: " << result << endl;
	return result;
}

double getPow(double number, int pow)
{
	double result = number;
	for (int i = 1; i < pow; i++)
	{
		result *= number;
	}
	return result;
}