#include "lists.h"

/**
 * get_dnodeint_at_index - get the data at index number
 * @head: the head of the linked list
 * @index: the index
 *
 * Return: the node or data at the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (head != NULL)
	{
		if (num == index)
			return (head);
		head = head->next;
		num++;
	}

	return (NULL);
}
