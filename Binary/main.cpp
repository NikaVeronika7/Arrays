
#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
#define DEC_2_BIN
void main()
{
	setlocale(LC_ALL, "");
	int decimal; // ���������� ����� � ����������
	cout << "������� ���������� �����:"; cin >> decimal;
	cout << "Numerics" << endl;

#ifdef DEC_2_BIN
	const int MAX_CAPACITY = 32; // ����������� ��������� ����������� ��������� �����
	bool binary[MAX_CAPACITY]{}; //���� ������� ����� �������  ������� �������� �����

	int i = 0; // ����� �������
	//for (;decimal>0;i++)
	//{
	//	binary[i] = decimal % 2;  //��������� ������� ������  ����� � �������
	//	decimal /= 2;  //������� ������� �������� ������ �� ����������� �����
	//}
	for (; decimal; decimal /= 2)
		binary[i++] = decimal % 2;

	// ��� ��������� ��������� ���������� ����� ���������� ������� �� ���e���
	// ������� � ���������� ���������� �� �������
	for (--i; i >= 0; i--)
	{
		cout << binary[i];
	}
	cout << endl;
#endif // DEC_2_BIN

}