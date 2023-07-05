#include "lists.h"

/**
 * listint_len - finds the length of a linked list
 * @h: the head of the list
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
