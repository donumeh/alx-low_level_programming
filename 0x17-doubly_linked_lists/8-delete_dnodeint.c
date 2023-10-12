#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: the head of a linked list
 * @index: the index to delete at
 *
 * Return: data item at node deleted
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *prev = NULL;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		if (i == index)
		{
			if (prev == NULL)
			{
				prev = *head;
				*head = (*head)->next;
				free(prev);
				return (1);
			}
			else
			{
				prev->next = tmp->next;
				tmp->next->prev = prev;
				free(tmp);
				return (1);
			}
		}
		prev = tmp;
		tmp = tmp->next;
		i++;
	}
	return (-1);
}