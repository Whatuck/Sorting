#pragma once
#include <iostream>
#include<stdlib.h>
using namespace ::std;

class Sorting
{
public:

	virtual void sortList(int A, int N);

	static void printList(int A[], int N)
	{
		for (int i = 0; i < N; i++)
		{
			cout << A[i] << " ";
		}
	}
};