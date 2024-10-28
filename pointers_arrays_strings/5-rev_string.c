#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		i--;
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
	}
}
