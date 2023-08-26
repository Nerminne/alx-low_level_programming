#include "main.h"
/**
 * print_number - print an integer
 * @n: integer to be printed
 * Return: encoded string
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	for (i = 10; ; i *= 10)
	{
		if (n < i)
			break;
	}
	i /= 10;
	while (i > 10)
	{
		_putchar((n / i) + '0');
		n = n - ((n / i) * i);
		i /= 10;
	}
		_putchar((n / i) + '0');
	if (n >= 0)
		_putchar((n % i) + '0');
}
