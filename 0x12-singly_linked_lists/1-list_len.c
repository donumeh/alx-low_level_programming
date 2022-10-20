#include "lists.h"

/**
 * list_len - counts the length of the linked_list
 * @h: the node or head of the linked list
 *
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
