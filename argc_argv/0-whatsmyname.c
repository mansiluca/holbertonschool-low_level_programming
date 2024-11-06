#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}


/**
 * main - prints the program's name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	_puts_recursion(argv[0]);
	return (0);
}
