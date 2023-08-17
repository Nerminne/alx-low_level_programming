#include "main.h"
/**
 * print_line - function that print line according to n
 * @n: number of _
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}
