#include "main.h"
#include <stdio.h>

/**
 * main - prints the program's name, followed by a new line
 * it will print the name of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
