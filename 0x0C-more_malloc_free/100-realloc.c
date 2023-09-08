#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: is the new size in bytes of the new memory block
 * Return: pointer to newly created memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{	
       		new_ptr = malloc(sizeof(char) * (new_size));
		return (new_ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(sizeof(char) * (old_size + new_size));
	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; ptr != NULL && i < old_size; i++)
		*(new_ptr + i) = *((char *)ptr + i);
	free(ptr);
	return (new_ptr);
}
