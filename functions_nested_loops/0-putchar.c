#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *n = "_putchar";

	while (n[0] != '\0')
	{
		_putchar(n[0]);
		n++;
	}
	_putchar('\n');
	return (0);
}
