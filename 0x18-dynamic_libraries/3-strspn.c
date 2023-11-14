#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to string
 * @accept: prefix
 * Return: numbers of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, i = 0;

	while (s[i] != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (s[i] == accept[x])
			break;
			else
				x++;
		}
		if (s[i] != accept[x])
			break;
		i++;
	}
	return (i);
}
