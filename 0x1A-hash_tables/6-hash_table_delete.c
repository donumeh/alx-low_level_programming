#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *list = NULL, *tmp = NULL;
	unsigned long int i = 0;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			list = ht->array[i];

			while (list != NULL)
			{
				tmp = list;
				list = list->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
	}

	free(ht->array);
	free(ht);
}
