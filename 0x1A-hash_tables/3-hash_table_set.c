#include "hash_tables.h"
/**
 * hash_table_set - function adds an element to the hash table
 * @ht: hash table
 * @key: key of item
 * @value: value of key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *list;
	char *key_cpy, *value_cpy;
	
	if (key == NULL || value == NULL || ht->array == NULL || ht->size == 0)
		return (0);

	key_cpy = strdup(key);
	if (key_cpy == NULL)
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
	{
		free(key_cpy);
		return (0);
	}

	index = hash_djb2((const unsigned char *)key);
	list = malloc(sizeof(hash_node_t));
	if (list == NULL)
	{
		free(key_cpy);
		free(value_cpy);
		return (0);
	}

	list->key = key_cpy;
	list->value = value_cpy;
	list->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = list;
	else
	{
		list->next = ht->array[index];
		ht->array[index] = list;
	}

	return (1);
}
