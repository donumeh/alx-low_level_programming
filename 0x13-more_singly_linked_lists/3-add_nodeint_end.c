#include "lists.h"

/**
 * add_nodeint_end - adds a list to the end of the list
 * @head: the list
 * @n: the data to add
 *
 * Return: the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		listint_t *h = *head;

		while (h->next != NULL)
			h = h->next;
		h->next = new_node;
	}

	return (*head);
}
