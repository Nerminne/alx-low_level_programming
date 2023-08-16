#include "main.h"
/**
 * print_times_table - prints the n number times table
 * @n: number required its times table
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

void print_times_table(int n)
{
	int m, x, prod;

	for (m = 0; m <= n; m++)
	{
		_putchar('0');

		for (x = 1; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');
			
			prod = m * x;

			if (prod > 100)
			{
				_putchar((prod / 100) + '0');
				_putchar(((prod / 10) % 10) + '0');
			}

			else if (prod <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
				_putchar((prod / 10) + '0');
			
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
