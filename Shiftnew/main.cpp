#include  <iostream>
using namespace std;
#define tab "\t"
#define SHIFT_LEFT
//#define SHIFT_RIGHT


void main()
{
	setlocale(LC_ALL, "");
	//const int n = 10;
	//int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };

	cout << double() << endl;
    const int n = 10;
	int arr[n] = { 0, 1, 1, 2, 3, 5, 8, 13, 21,34 };

	//����� ������� �� �����

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//����� �������

	int buffer = arr[0];
	for (int i = 1; i < n; i++)
	{
		arr[i - 1] = arr[i];
	}
		arr[n - 1] = buffer;
	
	//����� ���������� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	
#ifdef SHIFT_LEFT
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;

#endif // SHIFT_LEFT


#ifdef SHIFT_RIGHT

		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
#endif // SHIFT_RIGHT
	

		for (int i = 0; i < 0; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	
		
	
}