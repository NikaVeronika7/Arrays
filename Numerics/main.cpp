#include<iostream>
using namespace std;
//#define DEC_2_BIN
#define DEC_2_HEX

using std::cin;
using std:: cout;
using std:: endl;


void main()

{
	setlocale(LC_ALL, "");
	int decimal; // десятичное число с клавиатуры
	cout << "Введите десятичное число:"; cin >> decimal;
	cout << "Numerics" << endl;
#ifdef DEC_2_BIN
	const int MAX_CAPACITY = 32; // максимально возможная разрядность воичного числа
	bool binary[MAX_CAPACITY]{}; //этот массиив будет хранить  разряды двоичнго числа

	int i = 0; // номер разряда
	//for (;decimal>0;i++)
	//{
	//	binary[i] = decimal % 2;  //сохраняем младший разряд  числа в массиве
	//	decimal /= 2;  //убираем младший двоичный разряд из дясетичного числа
	//}
	for (; decimal; decimal /= 2)binary[i++] = decimal % 2;

	// для получения конечного результата нужно переписать остатки от длелния
	// начиная с последнего результата от деления
	for (--i; i >= 0; i--)
	{
		cout << binary[i];
	}
	cout << endl;
#endif // DEC_2_BIN

	
#ifdef DEC_2_HEX
	
	const int MAX_HEX_CAPACITY = 8;
	char hex [MAX_HEX_CAPACITY] = {};
	int i = 0;
	for (; decimal; i++)
	{
		hex[i] = decimal % 16;//  получаем младший шестнадцетиричный разряд и сохраняем его
		decimal /= 16; // убираем  младший шестнадцатеричный разряд из десятичного числа 
	}
	for (--i; i >= 0; i--)
	{
		if (hex[i] < 10)
			cout << (int)hex[i];
		else
			cout << char(hex[i] + 55);

	}
	cout << endl;

#endif // DEC_2_HEX

}