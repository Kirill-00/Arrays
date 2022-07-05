#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 15;
	int arr[n];
	//Заполнение масива случайными числами
	int min, max;
	do
	{
		cout << "Введите минимальное случайное число: "; cin >> min;
		cout << "Введите максимальное случайное число: "; cin >> max;
		if (min > max)cout << "Error: значения некорректны, попробуйте еще раз" << endl;
	} while (min > max);
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (max - min) + min;
	}
	//Вывод масива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}