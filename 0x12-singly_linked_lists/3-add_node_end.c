#include "lists.h"

/**
 * add_node_end - adds a node to the end of the linedlist
 * @head: the head of the singly linked list
 * @str: the string to add
 *
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* list_t *temp; */
	char *dup;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;
	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
