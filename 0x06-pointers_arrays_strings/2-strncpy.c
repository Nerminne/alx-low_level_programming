#include "main.h"
/**
 **_strncpy - function that concatenates two strings.
 * @src: pointer to string to concatenate upon
 * @dest: pointer to string append to dest
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, dest_len = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[dest_len++] = src[i];
	if (i < n)
		dest[dest_len] = '\0';

	return (dest);
}
