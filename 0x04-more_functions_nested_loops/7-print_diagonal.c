#include "main.h"
/**
 * print_diagonal - function that print diagonal according to n
 * @n: number of diagonal
 * Return: Always 0 (Success)
 * main.h is header file contain prototype of functions used
 */

void print_diagonal(int n)
{
	int space, diag;

	if (n > 0)
	{
		for (diag = 0; diag <= n; diag++)
		{
			for (space = 1; space <= diag; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
