#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @n: bytes of the memory area pointed to by s
 * @b: constant byte
 * @s: pointer to memory area
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > i; i++)
		s[i] = b;
	return (s);
}
