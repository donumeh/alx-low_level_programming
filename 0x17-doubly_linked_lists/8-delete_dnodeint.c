#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at an index
 * @head: the head of the index to delete from
 * @index: the index pos to delete
 *
 * Return: 1, if successful, -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *prev, *current;
	unsigned int i = 0;

	tmp = prev = NULL;
	current = *head;
	while (current != NULL)
	{
		if (i == index)
		{
			if (index == 0)
			{
				tmp = *head;
				*head = (*head)->next;
				if (*head)
					(*head)->prev = NULL;
				free(tmp);
				return (1);
			}
			tmp = current;
			prev->next = current->next;
			if (current->next)
				current->next->prev = prev;
			free(tmp);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}

	return (-1);
}
