#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at an index
 * @h: the head of the node
 * @idx: the index to add the new node at
 * @n: the data element of the new node
 *
 * Return: dlistint_t (the head of the new node)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head, *new;

	head = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	if (head->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = head;
	new->next = head->next;
	head->next->prev = new;
	head->next = new;

	return (new);
}
