#include "main.h"

/**
 * prime_factor - finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: void
 */

void prime_factor(void)
{
	int i;
	long prime = 612852475143;

	for (i = 2; i < prime; i++)
	{
		if (prime % i == 0)
		{
			prime /= i;
			i--;
		}
	}
	printf("%ld\n", prime);
}

/**
 * main - calls prime_factor function
 *
 * Return: Always 0.
 */

int main(void)
{
	prime_factor();
	return (0);
}
