#include "lists.h"

/**
 * insert_nodeint_at_index - adda a node at an index
 * @head: the head of the list
 * @idx: the index to add at
 * @n: the data to add
 *
 * Return: linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new = NULL, *h = NULL, *prev = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0 || *head == NULL)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	else
	{
		h = *head;
		while (h->next != NULL)
		{
			if (idx == i)
			{
				new->next = h;
				prev->next = new;
				return (*head);
			}
			prev = h;
			h = h->next;
			i++;
		}
		if (idx == i)
		{
			h->next = new;
			return (*head);
		}

	}
	return (NULL);
}
