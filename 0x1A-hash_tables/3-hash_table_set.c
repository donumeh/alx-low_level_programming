#include "hash_tables.h"

/**
 * insert_hash_node - inserts a node at pos
 * @ht: hash table
 * @hash_key: the key/index to insert at
 * @node: the node to insert
 *
 * Return: void
 */

int insert_hash_node(hash_table_t *ht, unsigned long int hash_key,
		hash_node_t *node)
{
	if (ht->array[hash_key] == NULL)
	{
		printf("%s\n", "Here");
		ht->array[hash_key] = node;
		return (1);
	}
	else
	{
		printf("%s\n", "here2");
		node->next = ht->array[hash_key];
		ht->array[hash_key] = node;
		return (1);
	}
	return (0);
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
	hash_node_t *node;
	unsigned long int hash_key;
	int flag;

	if (key == NULL)
		return (0);
	if (ht == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	hash_key = key_index((unsigned char *)key, sizeof(ht->array));

	flag = insert_hash_node(ht, hash_key, node);
	if (flag == 0)
		return (0);

	return (1);
}
