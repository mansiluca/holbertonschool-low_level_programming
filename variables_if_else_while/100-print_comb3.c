#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = '0';
	int C = '1';

	while (c <= '8')
	{
		while (C <= '9')
		{
			if (c < C)
			{
				putchar(c);
				putchar(C);
				if (c != '8' || C != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			C++;
		}
		c++;
		C = c + 1;
	}
	putchar('\n');
	return (0);
}
