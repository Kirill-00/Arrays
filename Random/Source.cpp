#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 15;
	int arr[n];
	//���������� ������ ���������� �������
	int min, max;
	do
	{
		cout << "������� ����������� ��������� �����: "; cin >> min;
		cout << "������� ������������ ��������� �����: "; cin >> max;
		if (min > max)cout << "Error: �������� �����������, ���������� ��� ���" << endl;
	} while (min > max);
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (max - min) + min;
	}
	//����� ������ �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}