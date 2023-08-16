#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: number to get its last digit
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */
int print_last_digit(int n)
{
	int last_d = n % 10;

	if (last_d < 0)
		last_d *= -1;

	_putchar(last_d + '0');

	return (last_d);
}
