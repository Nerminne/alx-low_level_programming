#include "main.h"
#define NULL 0
/**
 * _strchr - function that locates a character in a string.
 * @s: pointer to string where char will be located
 * @c: character
 * Return: pointer to first occurrence of c or null if not
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		else
			s++;
	}
	return (NULL);
}
