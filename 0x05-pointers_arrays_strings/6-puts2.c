#include "main.h"
/**
 * puts2 - prints a string, followed by a new line
 * @str: string
 */
void puts2(char *str)
{
	int i = 0, lenght = 0;

	while (str[i++])
		lenght++;
	for (i = 0; i < lenght; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
