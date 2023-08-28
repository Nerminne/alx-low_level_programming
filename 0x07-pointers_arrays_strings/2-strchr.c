#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: pointer to string where char will be located
 * @c: character
 * Return: pointer to first occurrence of c or null if not
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
		return ('\0');
}
