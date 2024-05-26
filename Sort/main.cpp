#include <iostream>
#include <stdlib.h>
#include "SIS.h"
#include "Bubble.h"

using namespace ::std;
int main()
{
	system("Chcp 1251");
	const int N = 10;
	int* A = new int[N];
	int* B = new int[N];

	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % (100 + 1);
		B[i] = rand() % (100 + 1);
	}

	cout << "\nНеотсортированный массив А:\n";
	Sorting::printList(A, N);
	cout << "\n \nПузырьковая сортировка:\n";
	BubbleSort::sortList(A, N);
	Sorting::printList(A, N);

	cout << "\n \nНеотсортированный массив B:\n";
	Sorting::printList(B, N);
	cout << "\n \nСортировка простой вставкой:\n";
	SimpleInsertSort::sortList(B, N);
	Sorting::printList(B, N);
}