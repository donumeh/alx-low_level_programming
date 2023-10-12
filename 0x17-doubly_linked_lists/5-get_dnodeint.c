#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at an index
 * @head: the head of the linked list
 * @index: the index pos of node to return
 *
 * Return: the node at an index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t n = 0;
	dlistint_t *tmp;

	tmp = head;
	while (tmp && n != index)
	{
		n++;
		tmp = tmp->next;
	}

	return (tmp);
}
