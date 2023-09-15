#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of parameters pass through function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *s;

	va_start(strings, n);
	for (i = 0; i < n && n > 0; i++)
	{
		s = va_arg(strings, char*);
		if (s == NULL)
			s = "(nil)";
		if (i == (n - 1) || separator == NULL)
			printf("%s", s);
		else
			printf("%s%s", s, separator);
	}
	printf("\n");
	va_end(strings);
}
