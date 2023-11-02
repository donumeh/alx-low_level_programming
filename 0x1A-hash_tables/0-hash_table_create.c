#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the table
 *
 * Return: the node containing the table created
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable = NULL;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	htable->size = size;
	htable->array = malloc(sizeof(hash_table_t *) * size);
	if (htable->array == NULL)
		return (NULL);

	return (htable);
}
