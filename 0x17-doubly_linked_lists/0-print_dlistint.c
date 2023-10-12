#include "lists.h"

/**
 * print_dlistint - prints the elements of a doubly linked list
 * @h: the head of the linked list
 *
 * Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n);
}
