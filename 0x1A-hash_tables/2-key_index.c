#include "hash_tables.h"

/**
 * key_index - key index where to bucket the node
 * @key: the key to use
 * @size: the size of the array
 *
 * Return: the position to put node
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, hash_key;

	hash = hash_djb2(key);
	hash_key = hash % size;

	return (hash_key);
}
