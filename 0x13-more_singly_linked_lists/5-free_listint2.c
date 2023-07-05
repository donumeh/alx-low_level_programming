#include "lists.h"

/**
 * free_listint2 - freea a linked list
 * @head: the head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *prev;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
	}
	*head = NULL;
}
