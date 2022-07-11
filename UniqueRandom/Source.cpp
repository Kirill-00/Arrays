#include<iostream>
#include<ctime>
using namespace std;

#define tab "\t"
//#define UNIQUE_1
#define UNIQUE_2

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
#ifdef UNIQUE_1
	//заполнение массива уникальными случайными числами
	for (int i = 0; i < n; i++)
	{
		bool unique;//флаг уникальности
		do
		{
			arr[i] = rand() % n;
			unique = true;//предволагает что сгенерировалось униепльное случайное число
			//но это нужно проверить:
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
	//Вывод масива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif UNIQUE_1
#ifdef UNIQUE_2
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
	//Вывод масива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif UNIQUE_2

}