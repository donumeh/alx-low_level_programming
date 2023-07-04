#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list
 * @head: the head of the linked list
 * @str: the str in the list
 *
 * Return: the head to linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *h;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	h = *head;
	new->len = strlen(str);
	new->str = strdup(str);
	new->next = h;
	h = new;
	*head = h;

	return (*head);
}
