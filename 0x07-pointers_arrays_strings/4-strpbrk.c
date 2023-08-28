#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to string
 * @accept: set of bytes
 * Return: numbers of bytes in initial segment of s
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (*s == accept[x])
			break;
			else
				x++;
		}
		if (*s == accept[x])
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
