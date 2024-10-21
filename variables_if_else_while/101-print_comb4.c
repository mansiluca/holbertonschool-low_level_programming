#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, C, D;

	for (c = '0'; c <= '7'; c++)
	{
		for (C = c + 1; C <= '8'; C++)
		{
			for (D = C + 1; D <= '9'; D++)
			{
				putchar(c);
				putchar(C);
				putchar(D);
				if (c != '7' || C != '8' || D != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

