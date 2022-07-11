#include<iostream>
using namespace std;
#define TASK1
//#define TASK2
void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK1
	int a=1;
	for (int i = 1; i <= 9; i++)
	{
		for (int l = 1; l <= 9; l++)
		{
			a = l * i;
			cout << i << "*" << l << "=" << a <<"\t";
		}
			cout << endl;
	}
#endif TASK1
#ifdef TASK2
	int a=1;
	for (int i = 1; i <= 9; i++)
	{
		for (int l = 1; l <= 9; l++)
		{
			a = l * i;
			cout << a<<"\t";
		}
			cout << endl<<endl;
	}

#endif TASK2
}
