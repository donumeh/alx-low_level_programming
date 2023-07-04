#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: the head of a linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *prev;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev->str);
		free(prev);
	}
}
