#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of doubly linked list
 * @head: the head of the linked list
 * @n: the data to add to the linked list
 *
 * Return: dlistint_t (the node)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *prev;
	dlistint_t *h;

	h = *head;
	prev = NULL;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		dprintf(2, "Error, couldn't alloc memory");
		return (NULL);
	}

	temp->n = n;
	if (*head == NULL)
	{
		temp->next = NULL;
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		while (h != NULL)
		{
			prev = h;
			h = h->next;
		}
		temp->prev = prev;
		prev->next = temp;
		temp->next = NULL;
	}

	return (*head);
}
