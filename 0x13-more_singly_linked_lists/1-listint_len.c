#include "lists.h"
/**
 * listint_len - function that returns the
 * number of elements in a linked listint_t list.
 * @h: pointer to struct
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
