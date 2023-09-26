#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to struct
 * @idx: index where new node should be added
 * @n: data integer
 * Return: address if new node, NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp, *pos;
	unsigned int counter = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	temp = *head;
	if (idx == 0)
	{
		*head = new_node;
		new_node->next = temp;
	}
	else
	{
		while (temp)
		{
			if (idx - 1 == counter)
			break;
			else
			{
				temp = temp->next;
				counter++;
			}
		}
		pos = temp;
		pos = pos->next;
		temp->next = new_node;
		new_node->next = pos;
	}
	return (new_node);
}
