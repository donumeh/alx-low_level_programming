#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at an index
 * @head: head of the list
 * @idx: index to insert at
 * @n: data to add
 *
 * Return: list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp, *prev;
	unsigned int i = 0;

	new_node = temp = prev = NULL;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (idx == i)
		{
			new_node->next = temp;
			prev->next = new_node;
			return (new_node);
		}
		i++;
		prev = temp;
		temp = temp->next;
	}
	if (idx == i)
	{
		prev->next = new_node;
		return (new_node);
	}
	return (NULL);
}
