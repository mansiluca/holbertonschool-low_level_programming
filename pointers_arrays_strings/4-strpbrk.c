#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing the characters to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
				return (s);
		}
		s++;
	}
	return (0);
}

#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = " ";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
