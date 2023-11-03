#include "hash_tables.h"

/**
 * insert_hash_node - inserts a node at pos
 * @ht: hash table
 * @hash_key: the key/index to insert at
 * @node: the node to insert
 *
 * Return: void
 */

hash_node_t *insert_hash_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *tmp;

	tmp = *head;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (*head);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(hash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *head;
	*head = tmp;

	return (*head);
}

/**
 * hash_table_set - creates a hash node and insert in a table
 * @ht: the hash_table to insert in
 * @key: the key of the node
 * @value: the value of the node
 *
 * Return: 1 if successful, 0 if otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_index;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k_index = key_index((unsigned char *)key, ht->size);

	if (insert_hash_node(&(ht->array[k_index]), key, value) == NULL)
		return (0);

	return (1);
}
