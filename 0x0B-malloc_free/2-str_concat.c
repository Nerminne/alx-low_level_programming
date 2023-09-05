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
	unsigned long int x = 0, i = 0;
	if (strlen(s1) == 0)
		s1 = "";
	if (strlen(s2) == 0)
		s2 = "";
	concat_str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (concat_str == NULL)
		return (NULL);
	while (strlen(s1) > i)
	{
		concat_str[i] = s1[i];
		i++;
	}
	while (strlen(s2) >= x)
	{
		concat_str[i] = s2[x];
		x++;
		i++;
	}
	return (concat_str);
}
