#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: key of item
 * @size: size of items in table
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size == 0 || key == NULL)
		return (0);

	index = hash_djb2(key);
	return (index % size);
}
