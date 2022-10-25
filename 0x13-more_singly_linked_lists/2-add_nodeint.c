#include "lists.h"

/**
 * add_nodeint - adds a node to the end of a linked list
 * @head: the head of the linked list
 * @n: data element
 *
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
