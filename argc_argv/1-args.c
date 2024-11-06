#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (argv[i] != '\0')
		{
			i++;
		}
		_puts_recursion(argv[i]);
		_putchar('\n');
	}
}
