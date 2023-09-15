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
	char *s;

	va_start(args, format);
	while (i < strlen(format) && format != NULL)
	{
		switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (i != (strlen(format) - 1))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
