#include "lists.h"

/**
 * free_dlistint_t - frees a doubly linked list
 * @head: the head of the linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev;

	prev = NULL;
	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
