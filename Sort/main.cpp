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

	cout << "\n����������������� ������ �:\n";
	Sorting::printList(A, N);
	cout << "\n \n����������� ����������:\n";
	BubbleSort::sortList(A, N);
	Sorting::printList(A, N);

	cout << "\n \n����������������� ������ B:\n";
	Sorting::printList(B, N);
	cout << "\n \n���������� ������� ��������:\n";
	SimpleInsertSort::sortList(B, N);
	Sorting::printList(B, N);
}