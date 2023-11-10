#include "lists.h"
/**
  * get_dnodeint_at_index - get nth node of a dlistint_t list
  * @head: pointer to list structure
  * @index: index of node
  * Return: node or NULL if fail
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	temp = head;
	while (index && temp)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
