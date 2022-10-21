#include "lists.h"

/**
 * add_node - adds a node to the beginning of a list
 * @head: the head of the list
 * @str: the string of the list
 *
 * Return: element of the list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);

	temp->next = *head;
	*head = temp;

	return (*head);
}
