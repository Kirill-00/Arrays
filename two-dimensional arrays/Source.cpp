#include<iostream>
using namespace std;

//#define TASK_1
#define TASK_2
//#define TASK_3

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_2
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
#endif TASK_2
#ifdef TASK_3
	
#endif TASK_3
}