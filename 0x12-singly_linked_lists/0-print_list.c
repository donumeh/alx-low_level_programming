#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer holding the struct
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			count++;
		}
		h = h->next;
	}
	return (count);
}
