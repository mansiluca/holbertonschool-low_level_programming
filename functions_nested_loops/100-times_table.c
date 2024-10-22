#include "main.h"

/**
 * print_number - prints a number with proper formatting.
 *
 * @result: int
 * @is_first: int
 *
 * Return: void
 */
void print_number(int result, int is_first)
{
	if (!is_first)
	{
		_putchar(',');
		_putchar(' ');
		if (result < 10)
		{
			_putchar(' ');
			_putchar(' ');
		}
		else if (result < 100)
		{
			_putchar(' ');
		}
	}

	if (result < 10)
	{
		_putchar(result + '0');
	}
	else if (result < 100)
	{
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
	}
	else
	{
		_putchar((result / 100) + '0');
		_putchar(((result / 10) % 10) + '0');
		_putchar((result % 10) + '0');
	}
}

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: int
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			print_number(result, j == 0);
		}
		_putchar('\n');
	}
}
