#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, C;

	for (c = 0; c <= 99; c++)
	{
		for (C = c + 1; C <= 99; C++)
		{
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			putchar(' ');
			putchar((C / 10) + '0');
			putchar((C % 10) + '0');

			if (c != 98 || C != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
