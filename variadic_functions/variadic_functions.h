#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct print - Struct print
 * @c: The data type
 * @f: The function associated
 */

typedef struct print
{
	char *c;
	void (*f)(va_list);
} print_t;

void print_all(const char * const format, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif
