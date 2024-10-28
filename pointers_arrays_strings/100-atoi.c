#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: integer value of string
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;

	while (*s)
	{
		int MAX = 2147483647;
		int MIN = -2147483648;

		if (result > MAX / 10 || (result == MAX / 10 && (*s - '0') > MAX % 10))
		{
			if (sign == 1)
				return (MAX);
			else
				return (MIN);
		}
		if (*s == '-')
		{
			if (started)
				break;
			sign = -sign;
		}
		else if (*s == '+')
		{
			if (started)
				break;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			result = result * 10 + (*s - '0');
		}
		else if (started)
		{
			break;
		}
		s++;
	}

	return (result * sign);
}
