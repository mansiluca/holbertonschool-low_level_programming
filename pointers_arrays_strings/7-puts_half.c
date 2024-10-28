#include "main.h"
#include "unistd.h"
#include "stdio.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 */

void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
