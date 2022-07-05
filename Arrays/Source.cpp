#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {};
	//ввод массива с клавиатуры
	cout << "Введите значение элементов массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; //обращаемся к элементу масива на запись
	}
	//вывод масива на жкран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab; //обращение у элементу массива на чтение
	}
	cout << endl;
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << tab; //обращение у элементу массива на чтение
	}
	cout << endl;

	//Вычисление суммы элементов масива: 
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее арефметическое элементов массива: " << (double)sum / n << endl;

	// Поиск минимального и максимального значения в массиве
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}