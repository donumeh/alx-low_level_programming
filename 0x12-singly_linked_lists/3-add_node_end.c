#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: the head of the list
 * @str: the str to add
 *
 * Return: the head of a list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h;
	list_t *new = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	h = *head;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (h->next != NULL)
			h = h->next;

		h->next = new;
	}

	return (*head);
}
