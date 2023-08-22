#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src to the buffer pointed
 * @src: pointer to string
 * @dest: buffer pointer
 * Return: pointer of buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; ; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}
	return (dest);
}
