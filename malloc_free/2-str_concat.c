#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory
 * containing the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, count = 0, len1 = 0, len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat[count++] = s1[i];
	for (i = 0; s2[i]; i++)
		concat[count++] = s2[i];
	concat[count] = '\0';
	return (concat);
}
