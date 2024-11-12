#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string to be duplicated
 *
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * len + 1);
	if (dup == NULL)
		return (NULL);

	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
