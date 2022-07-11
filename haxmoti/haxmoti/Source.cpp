#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "1");
	int r;
	cout << "Enter the size: "; cin >> r;
	
		setlocale(LC_ALL,"1");
	cout << (char)201;
	for (int i = 0; i < r*2; i++)cout << (char)205;
	cout << (char)187;
	cout << endl;
	for (int i = 0; i < r / 2; i++)
	{
		cout << (char)186;
		for (int j = 0; j < r; j++)
			if (j % 2 == 0)cout << (char)219 << (char)219;
			else cout << "  ";
		cout << (char)186;
		cout << endl;
		cout << (char)186;
		for (int j = 0; j < r; j++)
			if (j % 2 == 0)cout << "  ";
			else cout << (char)219 << (char)219;
		cout << (char)186;
		cout << endl;
	}
	cout << (char)200;
	for (int i = 0; i < r * 2; i++)cout << (char)205;
	cout << (char)188;

}