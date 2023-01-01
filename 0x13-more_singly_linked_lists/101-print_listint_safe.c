#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int diff;
	
	if (head == NULL)
		exit(98);

	while (head != NULL)
	{
		diff = head - head->next;
		count++;
		if (diff > 0)
			printf("[%p] %d\n", (void *)head, head->n);
		else
		{
			printf("[%p] %d\n", (void *)head, head->n);
			break;
		}
		head = head->next;
	}
	return (count);

}
