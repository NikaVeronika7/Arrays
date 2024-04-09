#include<iostream>
using namespace std;
//#define UNIKIM


void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n];
	//заполнение массива уникльными случаными числами
	for (int i = 0; i < n; i++)
	{
		bool unique;//  предполжим что сгенереровано уникльное число
		//но это надо проверить
		do
		{
			arr[i] = rand() % n;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
	
	//  вывод массива на экран


#ifdef UNIKIM
	//заполнение массива уникальными случайными числами:
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % n;
			unique = true;	//предположим, что сгенерировалось уникальное случайное число,
			//но это нужно проветрить:
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}

	//вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // UNIKIM


	
	//вывод массива на экран
	for (int i = 0; i < n; i++)
	{
	    cout << arr[i] << "\t";
	}
	cout << endl;
}
