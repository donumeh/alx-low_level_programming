#include "main.h"

/**
 * rev_string - reverse a string
 * @s: accepts a char arg
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j, len;
	char *str;

	while (*(s + i))
		i++;

	len = i;
	for (j = 0; j < len; j++)
	{
		*(str + j) = *(s + i);
		i--;
	}	
	printf("%s\n", *str);
}
