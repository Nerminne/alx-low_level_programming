#include "main.h"
/**
 * print_numbers - function that print 0 to 9
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);
	_putchar('\n');
}
