#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the pointer to the string to search
 * @needle: the pointer to the substring to find
 * Return: Pointer to the beginning of the located substring
 * or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		if (*haystack == needle[0])
		{
			i = 0;
			j = 0;
			while (needle[j] != '\0' && haystack[i] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return (haystack);
				i++;
				j++;
			}
		}
		haystack++;
	}
	return (0);
}
