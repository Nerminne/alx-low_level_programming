#include "lists.h"
/**
 * pop_listint - deletes the head node
 * of a listint_t linked list
 * @head: pointer to struct
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head)
	{
		temp = *head;
		*head = temp->next;
		n = temp->n;
		free(temp);
	}
	else
		return (0);

	return (n);
}
