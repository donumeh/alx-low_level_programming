#include "lists.h"

/**
 * print_list - prints the nodes in a list
 * @h: the head of the list
 *
 * Return:  num of nodes found
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		num++;
		h = h->next;
	}

	return (num);
}
