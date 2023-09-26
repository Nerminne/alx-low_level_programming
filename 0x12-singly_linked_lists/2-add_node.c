#include "lists.h"
/**
 * add_node - adds new node at the beginning of a list
 * @head: pointer to list structure
 * @str: string which need to duplicate
 * Return: address of new element or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL || strdup(str) == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
