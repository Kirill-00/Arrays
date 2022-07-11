#include<iostream>
using namespace std;

//#define DEC_2_BIN
#define DZ

void main()
{
	setlocale(LC_ALL, "");
#ifdef DEC_2_BIN
	int decimal;//десятичное число введеное пользователем
	cout << "Введите десетичное число: "; cin >> decimal;
	const int MAX_SIZE = 32;//int - 4 Bytes = 32bit
	bool bin[MAX_SIZE] = {};//этот масив будет хранить разряды двоичного числа

	int i = 0;//Счотчик разрядов
	while (decimal)
	{
		bin[i] = decimal % 2;//получаем младший разряд двоичного числа 
		decimal /= 2;//убираем полученый разряд двоичного числа
		i++; \
	}
	/*for(;decimal;i++,desimal/=2,bin[i] = decimal % 2)*/
	for (i--; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
#endif DEC_2_BIN
#ifdef DZ
	int decimal;//десятичное число введеное пользователем
	cout << "Введите десетичное число: "; cin >> decimal;
	const int MAX_SIZE = 32;//int - 4 Bytes = 32bit
	int bin[MAX_SIZE] = {};//этот масив будет хранить разряды шестнадцатеричного числа
	int i = 0;//Счотчик разрядов
	while (decimal)
	{
		bin[i] = decimal % 16;
		decimal /= 16;
		i++; \
	}
	for (i--; i >= 0; i--)
	{
		switch (bin[i])
		{
		case 10:cout << "A"; break;
		case 11:cout << "B"; break;
		case 12:cout << "C"; break;
		case 13:cout << "D"; break;
		case 14:cout << "E"; break;
		case 15:cout << "F"; break;
		default:cout << bin[i];
		}
	}
	cout << endl;
#endif DZ
}