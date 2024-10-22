#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');

			if (h != 23 || m != 59)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
