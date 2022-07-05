#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 3;
	const int COLS = 3;
	int A[ROWS][COLS];
	int B[ROWS][COLS];
	//Заполдняем матрицу случайными числами
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}
	//Выводим матрици на экран:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << "\n---------------------\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
	int C[ROWS][COLS]{};//Матрица результат
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int l = 0; l < COLS; l++)
			{
				C[i][j] += A[i][l] * B[l][j];
			}
		}
	}
	cout << "\n---------------------\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << C[i][j] << tab;
		}
		cout << endl;
	}
	//C[i][j] = A[0][0] * B[0][0] + A[0][1] * B[1][0] + A[0][2] * B[2][0];
}