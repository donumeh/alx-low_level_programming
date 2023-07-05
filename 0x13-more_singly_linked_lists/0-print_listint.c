#include "lists.h"

/**
 * print_listint - prints a linked list
 * @h: the head of the linked list
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
