#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * of a listint_t linked list.
 * @head: pointer to struct
 * @index: index of node starting with 0
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (counter == index)
		break;
		else
		{
			head = head->next;
			counter++;
		}
	}
	return (head);
}
