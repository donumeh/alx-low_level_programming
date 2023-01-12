#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a linked list
 * @head: the head of the linked list
 * @n: the data to add
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		dprintf(2, "Error, malloc failed\n");
		return (NULL);
	}
	temp->n = n;

	if ((*head) == NULL)
	{
		temp->next = NULL;
		temp->prev = NULL;
		(*head) = temp;
	}
	else
	{
		(*head)->prev = temp;
		temp->next = (*head);
		(*head) = temp;
	}

	return (*head);
}
