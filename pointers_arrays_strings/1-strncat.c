#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
