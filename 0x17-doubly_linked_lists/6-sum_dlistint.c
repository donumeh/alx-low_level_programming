#include "lists.h"

/**
 * sum_dlistint - calculates the sum of data in doubly linked list
 * @head: the head of the linked list
 *
 * Return: int (sum of the linked list)
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
