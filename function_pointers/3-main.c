#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

int (*get_op_func(char *s))(int, int);

/**
 * main - Entry point for the calculator program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	char *operator;
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	operation = get_op_func(operator);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
