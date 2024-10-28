#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: The size of the triangle
 *
 * Return: On success 1.
 */

void print_triangle(int size)
{
	int i, j, k;
	int count = size;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < i + 1; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
