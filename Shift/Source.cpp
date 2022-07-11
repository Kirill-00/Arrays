#include<iostream>

using namespace std;

#define tab "\t"
#define DZ
//#define YR

void main()
{
	setlocale(LC_ALL, "");
#ifdef DZ
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//сдвиг масива
	int shift;
	cout << "Введите колическтво здвигов: "; cin >> shift;
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--);
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	//вывод сдвинутого масива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif DZ
#ifdef YR
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//сдвиг масива
	int shift;
	cout << "Введите колическтво здвигов: "; cin >> shift;
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	//вывод сдвинутого масива
	//функция system() выполняет любую команду командной строки
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif YR
}