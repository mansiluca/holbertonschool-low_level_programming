#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the pointer to the 2D array
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += a[i * size + i];
		sum2 += a[(i + 1) * (size - 1)];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
