#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: the head of a linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *keep;

	keep = *head;
	while (keep)
	{
		temp = keep->next;
		free(keep);
		keep = temp;
	}
	*head = NULL;
}
