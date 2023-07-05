#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *prev;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
