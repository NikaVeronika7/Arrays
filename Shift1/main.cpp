﻿#include  <iostream>
using namespace std;
#define tab "\t"


void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };

	cout << double() << endl;
	const int n = 10;
	int arr[n] = { 0, 1, 1, 2, 3, 5, 8, 13, 21,34 };

	//вывод массива на экран

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//сдвиг массива

	int buffer = arr[0];
	for (int i = 1; i < n; i++)
	{
		arr[i - 1] = arr[i];
		arr[n - 1] = buffer;
	}
	//вывод сдвинутого массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}