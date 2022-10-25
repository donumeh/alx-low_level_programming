#include "lists.h"

/**
 * print_listint - prints the linked list element
 * @h: the head of the linked list
 *
 * Return: size_t (number of nodes)
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
