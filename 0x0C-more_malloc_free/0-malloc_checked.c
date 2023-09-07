#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory block
 * Return: pointer to the allocated memory
 * or if failed normal process termination
 * with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
