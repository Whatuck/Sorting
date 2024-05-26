#include "Sorting.h"

class SimpleInsertSort : virtual Sorting
{
public:
	static void sortList(int A[], int N)
	{
		int it, j, C = 0, P = 0;
		for (int i = 1; i < N; i++)
		{
			it = A[i];
			j = i;
			C++;
			while (j > 0 && it < A[j - 1])
			{
				A[j] = A[j - 1];
				j--;
				P++;
				C++;
			}
			A[j] = it;
			for (int h = 0; h < N; h++)
				cout << A[h] << " ";
			cout << endl;
		}
	}
};