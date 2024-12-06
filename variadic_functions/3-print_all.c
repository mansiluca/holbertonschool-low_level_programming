#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int j;
	const char *separator = "";

	print_t p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (p[j].c != NULL)
		{
			if (format[i] == p[j].c[0])
			{
				printf("%s", separator);
				p[j].f(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * print_char - prints a char
 * @args: list of arguments
 * Return: void
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: list of arguments
 * Return: void
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: list of arguments
 * Return: void
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: list of arguments
 * Return: void
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

int main(void)
{
	print_all("ceis", 'H', 3, "lberton");
	return (0);
}