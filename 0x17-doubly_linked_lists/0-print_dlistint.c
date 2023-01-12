#include "lists.h"

/**
 * print_dlistint - print a doubly linked list
 * @h: the head of the linked list
 *
 * Return: size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
