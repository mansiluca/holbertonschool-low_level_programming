#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
	{
		separator = "";
	}
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			const char *str = va_arg(args, const char *);

			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s", va_arg(args, char *));
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	printf("\n");
}
