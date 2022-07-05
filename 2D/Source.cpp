#include<iostream>
using namespace std;

#define tab "\t"

//#define BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef BASICS
	const int ROWS = 8;//Количество сторок
	const int COLS = 5;//Количество столбцов
	int arr[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
#endif // BASICS

	//     TheMatrix:
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
	//     Matrix addition:
	//При сложении дыух матриц мы получаем третью матрицу, 
	//каждый элемент которой является суммой соответстцющих элементов слогаемых матриц.
	int C[ROWS][COLS]{};//Матрица результат
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
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
}