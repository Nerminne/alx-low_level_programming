#include "main.h"
/**
 * more_numbers - function that print 0 to 14
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

void more_numbers(void)
{
	int num, counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 10)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
	_putchar('\n');
}
}
