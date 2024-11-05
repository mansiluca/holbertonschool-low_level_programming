#include "main.h"

/**
 * _sqrt_ext - extended function for _sqrt_recursion
 * @n: number to find the square root of
 * @i: iterator
 *
 * Return: square root of n
 */

int _sqrt_ext(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_ext(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_ext(n, 1));
}
