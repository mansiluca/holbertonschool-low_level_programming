#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int count = n / 2;

	for (i = 0; i < count; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
