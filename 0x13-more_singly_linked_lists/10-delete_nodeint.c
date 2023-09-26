#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at
 * index of a listint_t linked list.
 * @head: pointer to struct
 * @index: index where node should be deleted
 * Return: 1 if succeeded -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *pos, *delete;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return(1);
	}
	while (temp)
	{
		if ((index - 1) == counter)
		break;
		else
		{
			temp = temp->next;
			counter++;
		}
	}
	if ((index - 1) != counter)
		return (-1);
	pos = temp;
	pos = pos->next;
	delete = pos;
	pos = pos->next;
	free(delete);
	temp->next = pos;
	return (1);
}
