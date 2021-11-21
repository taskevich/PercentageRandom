#include <iostream>
#include <time.h>
#include <random>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "ru");
	int array[5];
	cout << "Введите проценты суммарно 100%.\n";

	for (int i = 0; i < 5; i++)
	{
		cout << "[" << i << "] = ";
		cin >> array[i];
	}
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "[" << i << "] = " << array[i] << "%\n";
	}

	int percent[100];
	for (int i = 0; i < 100; i++)
	{
		percent[i] = 0;
	}

	//rnd
	int tmp_last = 0;

	for (int i = 0; i < 5; i++)
	{
		int tmp = array[i];

		for (int j = tmp_last; j < tmp + tmp_last; j++)
			percent[j] = tmp;

		tmp_last += tmp;
	}

	for (int i = 0; i < 100; i++) {
		swap(percent[i], percent[rand() % 100]);
	}

	for (int i = 0; i < 100; i++) {
		cout << percent[i] << " ";
	}


	return 0;
}
