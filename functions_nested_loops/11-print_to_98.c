#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 *
 * @n: int
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	for (n = n; n < 99 ; n++)
	{
		printf("%d", n);
		if (n != 98 && n < 98)
		{
			printf(", ");
		}
	}
	for (n = n; n > 97 ; n--)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
