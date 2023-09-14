#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of parameters pass through function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	if (separator == NULL && n == 0)
		return;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d/n", va_arg(numbers, int));
		else
			printf("%d%s", va_arg(numbers, int), separator);
	}
	va_end(numbers);
}
