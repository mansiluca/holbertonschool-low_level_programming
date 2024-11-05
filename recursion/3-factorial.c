#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to find the factorial of
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	int result = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	result = n * factorial(n - 1);
	return (result);
}
