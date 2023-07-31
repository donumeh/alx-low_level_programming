#include "lists.h"

/**
 * print_listint_safe - prints a linked list in a safe way
 * @head: the head of the linked list
 *
 * Return: unsigned int (size_t)
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int *visited[1024], i = 0, j;

	if (head == NULL)
		exit(98);

	while (head != NULL)
	{
		visited[i] = (int *) head;
		for (j = 0; j < i && i > 0; j++)
		{
			if ((void *)head == (void *)visited[j])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (count);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
		i++;
	}

	return (count);
}
