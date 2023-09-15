#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_all - function that print anything
 * @format: list of types of arguments passed to function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned long int i = 0;
	va_list args;
	char *s, *separator = ", ";

	va_start(args, format);
	while (i < strlen(format))
	{
		if (i == strlen(format) + 1)
			separator = "";
		switch (format[i])
			{
			case 'c':
				printf("%c%s", va_arg(args, int), separator);
				break;
			case 'i':
				printf("%d%s",va_arg(args, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), separator);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", s, separator);
				break;
			default:
				i++;
				continue;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
