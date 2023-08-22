#include "main.h"
/**
 * puts_half - prints half a string, followed by a new line
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0, lenght = 0;

	while (str[i++])
		lenght++;
	if (lenght % 2 != 0)
		lenght = (lenght - 1) / 2;
	else
		lenght /= 2;
	for (i = lenght; i < lenght * 2; i++)
		_putchar(str[i]);
	_putchar('\n');
}

