#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @n: bytes of the memory area in src
 * @dest: destination for copied source memory
 * @src: source memory
 * Return: pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for ( ; n > 0; n--)
		*(dest++) = *(src++);
	return (dest);
}
