#include "lists.h"

/**
 * dlistint_len - prints the length of a linked list
 * @h: the head of a linked list
 *
 * Return: length of a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
