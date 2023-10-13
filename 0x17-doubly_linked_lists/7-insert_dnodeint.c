#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at an index
 * @h: the head of the node to insert a node int
 * @idx: the index to insert at
 * @n: the data to insert
 *
 * Return: new_node added
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *prev = NULL, *head = *h;
	size_t node_num, i = 0;

	node_num = dlistint_len(*h);

	if (idx > node_num)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h, new_node->prev = prev;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (head)
	{
		if (i == idx)
		{
			new_node->next = head, new_node->prev = prev;
			head->prev = new_node, prev->next = new_node;
			return (new_node);
		}
		prev = head, head = head->next, i++;
	}
	if (i == idx)
	{
		new_node->next = NULL, new_node->prev = prev;
		prev->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}


/**
 * dlistint_len - prints num of node
 * @h: the head of node
 *
 * Return: number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
