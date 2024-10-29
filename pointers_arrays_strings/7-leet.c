#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: address of str
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char leet[] = "aAeEoOtTlL";
	char leet_enc[] = "4433007711";

	while (str[i])
	{
		for (j = 0; leet[j]; j++)
		{
			if (str[i] == leet[j])
				str[i] = leet_enc[j];
		}
		i++;
	}
	return (str);
}
