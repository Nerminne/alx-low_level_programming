#include "main.h"
/**
 * print_triangle - function that print triangle
 * Return: Always 0 (Success)
 * @size: size of triangle
 * main.h is header file contain prototype of functions used
 */

void print_triangle(int size)
{
	int height, width, space;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (space = 1; space <= (size - height) ; space++)
				_putchar(' ');
			for (width = 1; width <= height; width++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
