#include "lists.h"

/**
 * pop_listint - deleted the head node of a linked list
 * @head: the head node of a linked list
 *
 * Return: int (the head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
