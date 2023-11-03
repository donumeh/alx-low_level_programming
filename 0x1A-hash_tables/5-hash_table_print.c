#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int j = 0;
	hash_node_t *h_nd;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			h_nd = ht->array[i];
			j++;
			if (j == 1)
				printf("'%s': '%s'",
						h_nd->key, h_nd->value);
			else
				printf(", '%s': '%s'",
						h_nd->key, h_nd->value);
		}
	}
	printf("}\n");
}
