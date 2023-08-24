#include "main.h"
/**
 * *string_toupper - change lowercase to uppercase
 * @ptr: pointer to string
 * Return: Character in uppercase
 */

char *string_toupper(char *ptr)
{
	for (; *ptr != '\0'; ptr++)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		*ptr = *ptr - 32;
	}
	return (ptr);
}
