#include "lists.h"

/**
 * get_nodeint_at_index - gets the node int at index
 * @head: the head of a node
 * @index: the index of a node
 *
 * Return: listint_t (int value of the fifth element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
