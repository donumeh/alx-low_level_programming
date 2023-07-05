#include "lists.h"

/**
 * pop_listint - pops value off a linked list
 * @head: the head of a linked list
 *
 * Return: int (value popped)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num = 0;

	if (head == NULL || *head == NULL)
		return (0);
	num = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (num);
}
