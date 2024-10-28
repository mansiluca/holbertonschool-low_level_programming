#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: The number of times the character \ should be printed
 *
 * Return: On success 1.
 */

void print_diagonal(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
