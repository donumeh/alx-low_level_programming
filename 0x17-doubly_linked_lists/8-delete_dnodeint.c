#include "lists.h"

/**
 * delete_dnodeint_at_inde - deletes a node at an index
 * @head: the head of the list
 * @index: the index position to delete
 * 
 * Return: int; 1 if succeeded -1 if otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = *head;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (!current->next)
			return (-1);
		current = current->next;
	}

	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
