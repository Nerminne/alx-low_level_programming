#include "lists.h"
/**
 * print_list - prints all the elements of a list_t
 * @h: pointer to list structure
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
			printf("[0] (nil)\n");
		h = h->next;
		counter++;
	}
	return (counter);
}
