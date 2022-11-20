#include "main.h"

/**
 * _realloc - allocates a new memory to ptr
 * @ptr: pointer to new mem
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s1, *s3;
	unsigned int i;

	if (!ptr)
	{
		ptr = malloc(new_size * sizeof(char));
		if (ptr == NULL)
			return (NULL);
		else
			return (ptr);
	}

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	s1 = ptr;

	if (new_size > old_size)
	{
		s3 = malloc(new_size * sizeof(char));
		if (s3 == NULL)
			return (NULL);

		for (i = 0; i < old_size; i++)
		{
			s3[i] = s1[i];
		}
	}

	free(s1);
	return (s3);
}
