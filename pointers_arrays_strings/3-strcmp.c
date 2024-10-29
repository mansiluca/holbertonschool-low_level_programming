#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference between first different characters
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] && s2[b] && s1[a] == s2[b])
	{
		a++;
		b++;
	}
	return (s1[a] - s2[b]);
}
