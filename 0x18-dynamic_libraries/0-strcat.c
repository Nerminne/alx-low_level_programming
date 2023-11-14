#include "main.h"
/**
 **_strcat - function that concatenates two strings.
 * @src: pointer to string to concatenate upon
 * @dest: pointer to string append to dest
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[i] != '\0')
		dest[dest_len++] = src[i++];
	dest[dest_len] = '\0';

	return (dest);
}
