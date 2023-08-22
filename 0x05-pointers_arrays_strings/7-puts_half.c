#include "main.h"
/**
 * puts_half - prints half a string, followed by a new line
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0, lenght = 0, n = 0;

	while (str[i++])
		lenght++;
	if (lenght % 2 != 0)
		n = (lenght - 1) / 2;
	else
		n = lenght / 2;
	for (i = n; i <= lenght; i++)
		_putchar(str[i]);
	_putchar('\n');
}

