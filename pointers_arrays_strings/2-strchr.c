#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the pointer to the string
 * @c: the character to locate
 * Return: Pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
