#include "main.h"
/**
 * print_most_numbers - function that print 0 to 9 expect 2,4
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		if ((num != '2') && (num != '4'))
		_putchar(num);
	_putchar('\n');
}
