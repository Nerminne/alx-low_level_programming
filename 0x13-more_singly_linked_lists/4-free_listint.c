#include "lists.h"
/**
 * free_listint - function that frees a list_t list.
 * @head: pointer to list structure
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
