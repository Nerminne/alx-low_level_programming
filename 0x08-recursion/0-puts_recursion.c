#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	_putchar(*s++);
	if (*s != '\0' && *(s + 0) != '\0')
		_puts_recursion(s);
	else
		_putchar('\n');
}
