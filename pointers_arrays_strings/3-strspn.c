#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring
* @s: the pointer to the string
* @accept: the pointer to the string of bytes to accept
* Return: the number of bytes in the initial segment of s
* which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (count);
}
