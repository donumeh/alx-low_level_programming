#include "lists.h"

/**
 * get_nodeint_at_index - returns node at an index
 * @head: the head of the list
 * @index: the index to stop at
 *
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
