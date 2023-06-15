#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previously allocated block
 * @old_size: the size, in bytes, of the allocated space
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: a memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_block = NULL;
	unsigned int i;
	char *byte_init = NULL;
	char *old_block = NULL;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_block = malloc(new_size);
		if (new_block == NULL)
			return (NULL);
		return (new_block);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_block = malloc(new_size);
	if (new_block == NULL)
		return (NULL);

	byte_init = (char *)new_block;
	old_block = (char *)ptr;
	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			byte_init[i] = old_block[i];
	else
		for (i = 0; i < new_size; i++)
			byte_init[i] = old_block[i];

	free(ptr);
	return (new_block);
}
