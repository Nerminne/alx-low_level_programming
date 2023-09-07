#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: size of memory block
 * Return: return pointer allocate space for s1 followed by s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;

	unsigned long int x = 0, i = 0, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
		len1 = 0;
	}
	else
		len1 = strlen(s1);
	if (s2 == NULL)
	{
		s2 = "";
		len2 = 0;
	}
	else
		len2 = strlen(s2);
	if (n >= strlen(s2))
		n = len2;
	concat_str = malloc(sizeof(char) * (len1 + n + 1));
	if (concat_str == NULL)
		return (NULL);
	while (s1[i])
	{
		concat_str[i] = s1[i];
		i++;
	}
	while (x <= n)
	{
		concat_str[i] = s2[x];
		x++;
		i++;
	}
	concat_str[i] = '\0';
	return (concat_str);
}
