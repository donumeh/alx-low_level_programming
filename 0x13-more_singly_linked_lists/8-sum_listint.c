#include "lists.h"

/**
 * sum_listint - sums the integers in a linked list
 * @head: the head of a linked list
 *
 * Return: int (sum of the linked list)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
