#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters pass through function
 * Return: 0 when n equal zero
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n)
	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);
	va_end(numbers);

	return (sum);
}
