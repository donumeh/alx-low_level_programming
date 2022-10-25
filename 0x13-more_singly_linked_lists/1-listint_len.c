#include "lists.h"

/**
 * listint_len - prints the number of nodes in a linked-list
 * @h: the pointer to the first node
 *
 * Return: size_t (number of nodes)
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
