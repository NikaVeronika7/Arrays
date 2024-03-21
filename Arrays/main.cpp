#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];

	//arr[2] = 22048;
	//cout << arr[2] << endl;
	//  ввод элементов массива с клавиатуры
	cout << " Введите элементы массива:";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];

	}
	//вывод массива на экран в прямом порядке
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	// вывод массива на экран в обратном порядка
	for (int i = SIZE - 1; i >= 0; i--)
	 {
		cout << arr[i] << tab;
      }
	cout << endl;
	// вычиселение суммы элементов массива;
	int sum = 0;
	for(int i=0;i<SIZE;i++)
	{
		sum +=arr[i];
	}
	cout << "Сумма элементов массива:" << sum<<endl;
	cout << "Средне-арифиметческое:" << (double)sum / SIZE << endl;
//Поиск минимального и максимального значения в массиве
int min, max;
min = max = arr[0];
for(int i=0;i<SIZE;i++)
{
	if (arr[i] < min)min = arr[i];
	if (arr[i] > max)max = arr[i];
	
}
cout << "Минимальное значение в массива:" << min << endl;
cout << "Максимальне значение в массиве:" << max << endl;

}