#include <iostream>
using namespace std;

void main()
{

	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	// поиск повторений
	for (int i = 0; i < n; i++)
	{// arr[i] -  выбранный элемент
		bool met_before = false; // предполагаем, что выыбранное значение ранее не встерчалось
		//но надо проверить
		for (int j = 0; j < i; j++ )
		{ 
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
		    }
		}
		if (met_before)continue;

		int counter = 0; //счетчик повторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j]) counter++;
		}
		if (counter)  printf("Значение %i  повторяется %i раз\n", arr[i], counter);
		//if (counter) cout << "Значение" << arr[i] << " повторяется" << counter << "раз" << endl;

	}

}
