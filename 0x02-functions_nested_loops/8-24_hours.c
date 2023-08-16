#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

void jack_bauer(void)
{
	int x, y, a, b;

	for (x = '0'; x <= '2'; x++)
	{
		for (y = '0'; y <= '3'; y++)
		{
			for (a = '0'; a <= '5'; a++)
			{
				for (b = '0'; b <= '9'; b++)
				{
					_putchar(x);
					_putchar(y);
					_putchar(':');
					_putchar(a);
					_putchar(b);
					_putchar('\n');
				}
			}
		}
	}
}
