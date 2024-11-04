#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: the pointer to the memory area
 * @b: the constant byte
 * @n: the number of bytes to fill
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
