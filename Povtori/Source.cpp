#include<iostream>
using namespace std;
//#define DZ
//#define YR_V1
//#define never_defore
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
#ifdef DZ
	const int n = 10;
	int arr[n], arr2[n];
	//заполняем массив случайными числами
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
		arr2[i] = 0;
	}
	//вывод исходного масива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//проверка
	for (int i = 0; i < n; i++)
	{
		arr2[arr[i]] += 1;
	}
	//вывод
	for (int j = 0; j < 5; j++)
	{
		if (arr2[j])
		{
			cout << j << tab << arr2[j] << endl;
		}
	}
#endif DZ
#ifdef YR_V1
	const int n = 10;
	int arr[n] = {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		int count = 0;//cчотчик повторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count > 0)cout << arr[i] << " повторяется " << count << " раз\n";
	}
#endif YR_V1
#ifdef never_defore
	const int n = 10;
	int arr[n] = {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		bool never_defore = true;//предполагаем что текущее значение ранее не встречалось,но это нужно проверить
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				never_defore = false;
				break;
			}
		}
		if (never_defore)
		{
			int count = 0;//cчетчик повторений
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j])
				{
					count++;
				}
			}
			if (count > 0)cout << arr[i] << " повторяется " << count << " раз\n";
		}
	}
#endif never_defore
	const int n = 10;
	int arr[n] = {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)continue;
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])count++;
		}
		if (count > 0)cout << arr[i] << " повторяется " << count << " раз\n";
	}
}