#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: the head of a linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if (head == NULL)
		return;
	current = *head;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
