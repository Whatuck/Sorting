#include "Sorting.h"

class BubbleSort : virtual Sorting
{
public:

	static void sortList(int A[], int N)
	{
		int i = 1, j; long long int c = 0, p = 0;
		while (i < N)
		{
			c++;
			j = N - 1;
			while (j >= i)
			{
				c++;
				if (A[j - 1] > A[j])
				{
					c++;
					p++;
					int item = A[j - 1];
					A[j - 1] = A[j];
					A[j] = item;
				}
				j--;
			}
			i++;
			for (int k = 0; k < N; k++)
			{
				cout << A[k] << " ";
			}
			cout << endl;
		}
	}
};