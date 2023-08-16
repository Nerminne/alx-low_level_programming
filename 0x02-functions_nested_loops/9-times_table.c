#include "main.h"
/**
 * times_table - unction that prints the 9 times table
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

void times_table(void)
{
	int n, x, prod;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (x = 1; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * x;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
