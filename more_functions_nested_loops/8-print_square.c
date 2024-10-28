#include "main.h"

/**
 * print_square - prints a square
 * @size: The size of the square
 *
 * Return: On success 1.
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
