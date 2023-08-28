#include <stddef.h>
#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: pointer to string
 * @needlet: set of bytes
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (x = 0; needle[x] != '\0' && 
				needle[x] == haystack[i]; x++, i++)
		{
			if (needle[x + 1] == '\0')
				return(&haystack[i - x]);
		}
	}
	return (NULL);
}
