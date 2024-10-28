#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte
 * (\0), to the buffer pointed to by dest
 * @dest: destination of the copied string
 * @src: source of the string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}
