#include "lists.h"

/**
 * sum_dlistint - sums up the data in a doubly linked list
 * @head: the head of the linked list
 *
 * Return: sum of the data found
 */

int sum_dlistint(dlistint_t *head)
{
	ssize_t sum = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
