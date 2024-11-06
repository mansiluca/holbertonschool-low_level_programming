#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * All arguments should be printed, including the first one
 * one argument per line, ending with a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	(void)argc;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
}
