#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = '0';
	char C = 'a';

	if (c <= '9')
	{
		while (c <= '9')
		{
			putchar(c);
			c++;
		}
	} else
	{
		while (C <= 'f')
		{
			putchar(C);
			C++;
		}
	}
	putchar('\n');
	return (0);
}
