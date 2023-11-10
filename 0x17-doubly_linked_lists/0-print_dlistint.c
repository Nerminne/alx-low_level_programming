#include "lists.h"
/**
 * print_dlistint - prints all elements of list.
 * @h: pointer to list structure
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
