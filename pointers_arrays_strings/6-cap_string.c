#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: address of str
 */

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char sep[] = " \t\n,;.!?\"(){}";
	int count = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[count])
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (j = 0; sep[j]; j++)
			{
				if (str[i - 1] == sep[j])
				{
					str[i] -= 32;
					break;
				}
			}
		}
	}
	return (str);
}
