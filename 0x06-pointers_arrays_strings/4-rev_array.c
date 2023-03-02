#include "main.h"

/**
* reverse_array - a function that reverses the content of an array of integers.
* @*a: array of integers
* @n: number of elements in the array
**/

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		a[i] = a[j];
	}
}
