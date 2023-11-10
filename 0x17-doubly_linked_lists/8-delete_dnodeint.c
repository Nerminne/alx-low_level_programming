#include "lists.h"
/**
  * delete_dnodeint_at_index - deletes node at index index of list
  * @head: double pointer to list
  * @index: index of node to be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	while (index)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
