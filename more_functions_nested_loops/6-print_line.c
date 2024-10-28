#include "main.h"

/**
 * print_line - prints a straight line
 * @n: The number of times the character _ should be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_line(int n)
{
	for (int i = 0; i < n; i++)
	{
		_putchar('_');
	}
}
