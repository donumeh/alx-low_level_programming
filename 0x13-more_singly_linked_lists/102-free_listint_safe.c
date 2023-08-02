#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: the head of a linked list
 *
 * Return: the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0, i = 0, j = 0;
	listint_t *head, *tmp;

	head = *h;
	while (head != NULL)
	{
		count++;
		if (head <= head->next)
		{
			i = count;
			break;
		}
		head = head->next;
	}

	while (j < i && *h != NULL)
	{
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		j++;
	}
	*h = NULL;
	return (count);
}
