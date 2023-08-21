#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		s++;
		lenght++;
	}
	lenght++;
	while (lenght != 0)
	{
		_putchar(*s);
		s--;
		lenght--;
	}
	_putchar(*s);
	_putchar('\n');
}
