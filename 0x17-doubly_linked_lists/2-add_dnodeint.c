#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: the head of the list
 * @n: the value to add
 *
 * Return: the new head of the doubly linked list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head != NULL)
		(*head)->prev = new_node;

	new_node->next = (*head);
	new_node->prev = NULL;

	*head = new_node;

	return (*head);
}
