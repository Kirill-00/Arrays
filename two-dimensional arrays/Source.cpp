#include<iostream>
using namespace std;

//#define SORT
//#define UNIQUE_RANDOM
//#define POVTORI

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
#ifdef SORT
	const int ROWS = 4;
	const int COLS = 4;
	int arr[ROWS][COLS];
	//Заполнение матрицы случайными числами
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 15;
		}
	}
	//Вывод исходной матрицы на экран
	cout << "Массив до сортировки:" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
	int buffer;
	for (int l = 0; l <= (ROWS * COLS); l++)//колличество проходов
	{
		//в строках упорядочиваем
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS - 1; j++)
			{
				if (arr[i][j] > arr[i][j + 1])
				{
					buffer = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = buffer;
				}
			}
		}
		//в столбах упорядочиваем
		for (int x = 0; x < COLS; x++)
		{
			for (int z = 0; z < ROWS - 1; z++)
			{
				if (arr[z][x] > arr[z][x + 1])
				{
					buffer = arr[z][x];
					arr[z][x] = arr[z][x + 1];
					arr[z][x + 1] = buffer;
				}
			}
}
	 }
	cout << "Массив после сортировки:" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
#endif SORT
#ifdef UNIQUE_RANDOM
	const int ROWS = 4;
	const int COLS = 3;
	int arr[ROWS][COLS];
	bool unique;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS;)
        {
            unique = false;
            int Random = rand() % 12;
            for (int b = 0; b < ROWS; b++)
            {
                for (int d = 0; d < COLS; d++)
                {
                    if (arr[b][d] == Random)
                    {
                        unique = true;
                        break;
                    }
                }
            }
            if (!unique)
            {
                arr[i][j] = Random;
                j++;
            }
        }
    }
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
#endif UNIQUE_RANDOM
#ifdef POVTORI
	const int ROWS = 4;
	const int COLS = 4;
	int arr[ROWS][COLS];
	//Заполнение матрицы случайными числами
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 5;
		}
	}
	//Вывод исходной матрицы на экран
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
	int count = 0;//cчотчик повторений
	for (int i = 0; i <= ROWS - 1; i++)
	{
		for (int j = 0; j <= COLS - 1; j++)
		{
			for (int a = 0; a <= i; a++)
			{
				for (int b = 0; b < COLS; b++)
				{
					if (arr[i][j] == arr[a][b]) count++;
				}
			}
			for (int c = i; c < ROWS; c++)
			{
				if (c == i)
				{
					for (int l = j; l < COLS; l++)
					{
						if (arr[i][j] == arr[c][l + 1]) count = 0;
					}
				}
				if (c > i)
				{
					for (int l = 0; l < COLS; l++)
					{
						if (arr[i][j] == arr[c][l + 1]) count = 0;
					}
				}
			}
			if (count > 0)cout << arr[i][j] << " повторяется " << count << " раз\n";
		}
	}
#endif POVTORI
}