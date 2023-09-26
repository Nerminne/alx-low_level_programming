#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to struct
 * Return: sum of data of list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	while (head)
	{
		temp = head;
		head = temp->next;
		sum += temp->n;
	}
	return (sum);
}
