#include<iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
#define TASK_3

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_3
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
#endif TASK_3
}