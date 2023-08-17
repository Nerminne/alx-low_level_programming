#include "main.h"
/**
 * print_square - function that print square
 * @size: size of square
 * Return: Always 0 (Success)
 * main.h is header file contain prototype of functions used
 */

void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
