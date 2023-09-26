#include "lists.h"
/**
 * add_node_end - adds a new node at the end of list
 * @head: pointer to list structure
 * @str: string
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	temp = *head;

	if (str == NULL || strdup(str) == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (temp->next)
			temp = temp->next;
	temp->next = new_node;
	}
	return (new_node);
}
