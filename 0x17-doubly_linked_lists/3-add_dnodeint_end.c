#include "lists.h"

/**
 * add_dnodeint_end - add a node to the end of the linked list
 * @head: the head of the list
 * @n: the numero to add
 *
 * Return: the head to new list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *tmp;

	tmp = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	new_node->next = NULL;
	new_node->prev = tmp;

	return (*head);
}
