#include "lists.h"

/**
 * sum_listint - sums up a linked list data
 * @head: head of list
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
