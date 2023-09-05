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

	concat_str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 2));
	if (concat_str == NULL)
		return (NULL);
	while (i < strlen(s1))
	{
		concat_str[i] = s1[i];
		i++;
	}
	while (x <= strlen(s2))
	{
		concat_str[i] = s2[x];
		x++;
		i++;
	}
	return (concat_str);
}
