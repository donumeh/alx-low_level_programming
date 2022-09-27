#include "main.h"

/**
 * _strstr - checks a substring in a string
 * @haystack: the string
 * @needle: substring
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (haystack + i);
	}
	return ('\0');
}
