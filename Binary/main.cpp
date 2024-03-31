
#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
#define DEC_2_BIN
void main()
{
	setlocale(LC_ALL, "");
	int decimal; // десятичное число с клавиатуры
	cout << "Введите десятичное число:"; cin >> decimal;
	cout << "Numerics" << endl;

#ifdef DEC_2_BIN
	const int MAX_CAPACITY = 32; // максимально возможная разрядность двоичного числа
	bool binary[MAX_CAPACITY]{}; //этот массиив будет хранить  разряды двоичнго числа

	int i = 0; // номер разряда
	//for (;decimal>0;i++)
	//{
	//	binary[i] = decimal % 2;  //сохраняем младший разряд  числа в массиве
	//	decimal /= 2;  //убираем младший двоичный разряд из дясетичного числа
	//}
	for (; decimal; decimal /= 2)
		binary[i++] = decimal % 2;

	// для получения конечного результата нужно переписать остатки от делeния
	// начиная с последнего результата от деления
	for (--i; i >= 0; i--)
	{
		cout << binary[i];
	}
	cout << endl;
#endif // DEC_2_BIN

}