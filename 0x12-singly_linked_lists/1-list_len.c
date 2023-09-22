#include "lists.h"
/**
 * list_len - prints all the elements of a list_t
 * @h: pointer to list structure
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
