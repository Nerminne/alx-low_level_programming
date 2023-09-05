#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: return pointer allocate space for s1 followed by s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned long int x = 0, i = 0, len1, len2;

	if (strlen(s1) == 0)
	{
		s1 = "";
		len1 = 0;
	}
	else
		len1 = strlen(s1);
	if (strlen(s2) == 0)
	{
		s2 = "";
		len2 = 0;
	}
	else
		len2 = strlen(s2);
	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat_str == NULL)
		return (NULL);
	while (s1[i])
	{
		concat_str[i] = s1[i];
		i++;
	}
	while (s2[x])
	{
		concat_str[i] = s2[x];
		x++;
		i++;
	}
	concat_str[i] = '\0';
	return (concat_str);
}
