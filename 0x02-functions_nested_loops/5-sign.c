#include "main.h"
/**
 * print_sign - checks sign of number
 * @n: int will be checked -ve/+ve/zero
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
