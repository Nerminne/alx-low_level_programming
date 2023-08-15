#include "main.h"
/**
 * print_alphabet - function that print alphabet
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

void print_alphabet(void)
{
	char alpha_ch;

	for (alpha_ch = 'a'; alpha_ch <= 'z'; alpha_ch++)
		_putchar(alpha_ch);
	_putchar('\n');
}
