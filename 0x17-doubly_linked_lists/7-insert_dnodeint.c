#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at an index
 * @h: the head of the node
 * @idx: the index to add the new node at
 * @n: the data element of the new node
 *
 * Return: dlistint_t (the head of the new node)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head;
	dlistint_t *temp;
	dlistint_t *prev;
	unsigned int count;
	dlistint_t *current;

	current = *h;
	prev = NULL;
	count = 0;
	head = *h;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		dprintf(2, "Error, Malloc failed to allocate\n");
		return (NULL);
	}
	temp->n = n;
	if (idx == 0)
		return (add_dnodeint(h, idx));
	
	while (head != NULL)
	{
		if (idx == count)
		{
			temp->prev = prev;
			temp->next = head;
			head->prev = temp;
			prev->next = temp;
		}
		prev = head;
		count++;
		head = head->next;
	}
	if (head == NULL && idx == count)
		return (add_dnodeint_end(h, idx));

	return (current);
}
