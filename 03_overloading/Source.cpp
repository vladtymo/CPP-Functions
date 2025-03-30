#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

// Function Overloading: функції з однаковою назвою, але різною сигнатурою
// сигнатура - характеристика параметрів функції, їх типи та кількість

int getRandom()
{
	return rand();
}
int getRandom(int max)
{
	return rand() % max;
}
int getRandom(int min, int max)
{
	return min + rand() % (max - min + 1);
}

int main()
{
	cout << "sec: " << time(0) << endl; // 1-st of January 1970
	srand(time(0));

	cout << "Random to 100: " << getRandom(100) << endl;
	cout << "Random: " << getRandom() << endl;
	cout << "Random from 50 to 70: " << getRandom(50, 70) << endl;

	return 0;
}