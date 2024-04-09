#include<iostream>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;


#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand, maxRand;

	do
	{
		system("CLS");
		cout << "введиет минимальное случайное число:"; cin >> minRand;
		cout << "введиет максимальное случайное число:"; cin >> maxRand;
	if (minRand >= maxRand)
	 {
		cerr << "Error:Введено некорректное значение" << endl;
		system("PAUSE");
	 }
	} while (minRand >= maxRand);
	

	//заполнение массива случайными числами

	for (int i = 0; i < n; i++)
	{
		//arr[i] = rand()%100+50;
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	//сортировка массива



	for (int i = 0; i < n; i++)// счетчик 'i' выбирает элемент кот надо поместить в мин значение
	{
		for (int j = i+1; j < n; j++) // счетчик пребирает оставшиеся элементы 
		{
			//arr]i] -  выбранный элемент массива
			//arr [j] -  перебираемый элемент массива
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}




	//ввывод  отсортированного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}