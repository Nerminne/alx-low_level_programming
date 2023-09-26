#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: pointer to list structure
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		free(head->str);
		temp = head;
		head = head->next;
		free(temp);
	}
}
