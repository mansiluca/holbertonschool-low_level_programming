#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: the pointer to the destination memory area
 * @src: the pointer to the source memory area
 * @n: the number of bytes to copy
 * Return: Pointer to the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
