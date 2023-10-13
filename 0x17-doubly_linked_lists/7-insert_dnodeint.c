#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at an index
 * @h: the head of the doubly linked list
 * @idx: the index to insert at
 * @n: the data to insert
 *
 * Return: head of list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
		unsigned int idx, int n)
{
	dlistint_t *tmp = NULL, *new_node = NULL, *prev = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	tmp = *h;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	while (tmp->next != NULL)
	{
		if (i == idx)
		{
			new_node->next = tmp;
			new_node->prev = prev;
			prev->next = new_node;
			tmp->prev = new_node;
			return (new_node);
		}
		prev = tmp;
		tmp = tmp->next;
		i++;
	}
	if ((i + 1) == idx)
	{
		new_node->next = NULL;
		tmp->next = new_node;
		new_node->prev = tmp;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
