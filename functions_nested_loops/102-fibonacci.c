#include <stdio.h>

/**
 * main - hat prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a = 1, b =
		2, c;
	int i;

	printf("%ld, %ld, ", a, b);
	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i != 50)
			printf("%ld, ", c);
		else
			printf("%ld\n", c);
	}
	return (0);
}
