#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a list
 * @head: the head of a linked list
 * @index: the index to delete from
 *
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev, *h;
	unsigned int n = 0;

	temp = prev = h = NULL;
	if (index == 0 && *head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	h = *head;
	while (h != NULL)
	{
		if (index == n)
		{
			temp = h;
			prev->next = h->next;
			free(temp);
			return (1);
		}
		prev = h;
		h = h->next;
		n++;
	}
	return (-1);
}
