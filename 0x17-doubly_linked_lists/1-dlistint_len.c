#include "lists.h"
/**
 * dlistint_len - return number of elements in list
 * @h: pointer to struct
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
