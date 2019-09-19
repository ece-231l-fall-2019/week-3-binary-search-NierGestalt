#include <vector>
#include "sort.h"
#include "iostream"

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort(int *begin, const int *end)
{
	for (int *j = begin; j != end; j++)
	{
		for (int *i = j + 1; i != end; i++)
		{
			if (*j > *i)
			{
				swap(j, i);
			}	
		}
	
	}
}
