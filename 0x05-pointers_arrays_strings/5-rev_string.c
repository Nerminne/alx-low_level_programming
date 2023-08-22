#include "main.h"
/**
 * rev_string - Prints a string in reverse
 * @s: The string to be printed.
 */
void rev_string(char *s)
{
	int i = 0;
	int lenght = 0;
	char rev;

	while (s[i++] != '\0')
		lenght++;
	for (i = lenght - 1; i >= lenght / 2; i--)
	{
		rev = s[i];
		s[i] = s[lenght - i - 1];
		s[lenght - i - 1] = rev;
	}
}
