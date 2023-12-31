#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: pointer to a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	hash_node_t **hash_arr;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash_arr = malloc(sizeof(hash_node_t *) * size);
	if (hash_arr == NULL)
	{
		free(hash);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash_arr[i] = NULL;
	hash->size = size;
	hash->array = hash_arr;

	return (hash);
}
