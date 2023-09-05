#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  returns a pointer to a new string
 * which is a duplicate of the string str.
 * @str: array to be duplicated
 * Return: pointer to string which is duplicate of str
 */
char *_strdup(char *str)
{
	char *dupl_str;
	unsigned long int i = 0;

	if (str == NULL)
		return (NULL);
	dupl_str = malloc(sizeof(char) * strlen(str));
	if (dupl_str == NULL)
		return (NULL);
	while (i <= strlen(str))
	{
		dupl_str[i] = str[i];
		i++;
	}
	return (dupl_str);
}
