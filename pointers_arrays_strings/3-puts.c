#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
