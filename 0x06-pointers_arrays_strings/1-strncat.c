#include "main.h"
/**
 **_strncat - function that concatenates two strings.
 * @src: pointer to string to concatenate upon
 * @dest: pointer to string append to dest
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
