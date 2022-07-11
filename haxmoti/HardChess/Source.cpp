#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		if (i % 2 == 0)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					for (int i = 0; i < n; i++)
					{
						for (int i = 0; i < n; i++)
						{
							if (i == 0)cout << ((i + j) % 2 == 0 ? "* " : "  ");
						}
					}
				}
				cout << endl;
			}
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					for (int i = 0; i < n; i++)
					{
						for (int i = 0; i < n; i++)
						{
							if (i == 0)cout << ((i + j) % 2 == 0 ? "  " : "* ");
						}
					}
				}
				cout << endl;
			}
		}
	}
}