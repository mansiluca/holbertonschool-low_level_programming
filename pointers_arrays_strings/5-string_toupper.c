#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to change
 * Return: pointer to the resulting string str
 */

char *string_toupper(char *str)
{
	int a = 0;
	int b = 0;
	char c;

	for (a = 0; str[a] != '\0'; a++)
	{
		c = str[a];
		if (c >= 'a' && c <= 'z')
		{
			c = c - 32;
		}
		str[b] = c;
		b++;
	}
	return (str);
}
