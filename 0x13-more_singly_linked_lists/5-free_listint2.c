#include "lists.h"
/**
 * free_listint2 - function that frees a list_t list.
 * @head: pointer to list structure
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
