#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: the head of a linked list
 *
 * Return: size_t
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t node_count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next,
					current->next->n);
			break;
		}
		current = current->next;
	}

	return (node_count);
}
