#include "lists.h"

/**
 * find_listint_loop - find the cyclic in the linked list
 * @head: the head of the linked list
 *
 * Return: the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare, *snail;

	if (head == NULL)
		return (NULL);

	hare = head;
	snail = head;

	while (hare != NULL && hare->next != NULL)
	{
		snail = snail->next;
		hare = hare->next->next;

		if (snail == hare)
		{
			snail = head;
			while (snail != hare)
			{
				snail = snail->next;
				hare = hare->next;
			}
			return (snail);
		}
	}
	return (NULL);
}
