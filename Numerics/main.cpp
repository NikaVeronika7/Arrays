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
	int decimal; // ���������� ����� � ����������
	cout << "������� ���������� �����:"; cin >> decimal;
	cout << "Numerics" << endl;
#ifdef DEC_2_BIN
	const int MAX_CAPACITY = 32; // ����������� ��������� ����������� �������� �����
	bool binary[MAX_CAPACITY]{}; //���� ������� ����� �������  ������� �������� �����

	int i = 0; // ����� �������
	//for (;decimal>0;i++)
	//{
	//	binary[i] = decimal % 2;  //��������� ������� ������  ����� � �������
	//	decimal /= 2;  //������� ������� �������� ������ �� ����������� �����
	//}
	for (; decimal; decimal /= 2)binary[i++] = decimal % 2;

	// ��� ��������� ��������� ���������� ����� ���������� ������� �� �������
	// ������� � ���������� ���������� �� �������
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
		hex[i] = decimal % 16;//  �������� ������� ����������������� ������ � ��������� ���
		decimal /= 16; // �������  ������� ����������������� ������ �� ����������� ����� 
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