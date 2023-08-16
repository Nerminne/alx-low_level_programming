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
	if (n < 0)
		n *= -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
