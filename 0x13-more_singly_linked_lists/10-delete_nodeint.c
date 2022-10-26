#include "lists.h"

/**
 * delete_nodeint_at_index - deletes an index at a particular position
 * @head: double pointer to the head of the linked list
 * @index: the position to be deleted
 *
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
