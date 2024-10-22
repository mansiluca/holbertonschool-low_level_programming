#include "main.h"

/**
 * times_table - that prints the 9 times table, starting with 0.
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, k;
	int count = 0;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			count = i * k;
			if (count < 10)
			{
				_putchar(count + '0');
			}
			else
			{
				_putchar((count / 10) + '0');
				_putchar((count % 10) + '0');
			}
			if (k != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((i * (k + 1)) < 10 && k != 9)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
