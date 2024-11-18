#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two intergers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_div - module two intergers
 * @a: first integer
 * @b: second integer
 * Return: result of the module of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
