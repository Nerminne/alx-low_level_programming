#include "main.h"
/**
 * print_number - function that print integar
 * @n: number
 *
 * main.h is header file contain prototype of functions used
 */
void print_number(int n)
{
	int tens;

	for (tens = 10; ; tens *= 10)
	{
		if (((n / tens) <= 9 && (n / tens) != 0)
				|| ((n / tens) <= -9 && (n / tens) != 0))
			break;
	}
	for (; tens > 10; tens /= 10)
	{
		_putchar((n / tens) + '0');
		n = (n - ((n / tens) * tens));
	}
	_putchar((n / tens) + '0');
	_putchar((n % tens) + '0');
}
