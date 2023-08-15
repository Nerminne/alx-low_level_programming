#include "main.h"
/**
 * print_alphabet_x10 - function that print alphabet 10 times
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

void print_alphabet_x10(void)
{
	char alpha_ch;
	int count;

	for (count = 0; count < 10; count++)
{
		for (alpha_ch = 'a'; alpha_ch <= 'z'; alpha_ch++)
		_putchar(alpha_ch);
	_putchar('\n');
}
}
