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
	listint_t *new_head;

	new_head = *head;
	temp = new_head->next;
	n = new_head->n;
	free(new_head);
	new_head = temp;

	return (n);
}
