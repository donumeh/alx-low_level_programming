#include "main.h"

int str_identify(char *, char *, int, int);
/**
 * wildcmp - compares two strings to know if identical
 * @s1: the string
 * @s2: the string to compare it with
 *
 * Return: 1 if identical, 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		return (1);
	return (str_identify(s1, s2, 0, 0));
}

/**
 * str_identify - checks if they are identical in someway
 * @s1: the string
 * @s2: the string to check it with
 * @len1: the length tracker for string one
 * @len2: length tracker for string two
 *
 * Return: 1 if identical, 0 if otherwise
 */

int str_identify(char *s1, char *s2, int len1, int len2)
{
	if (s1[len1] == '\0')
	{
		if (s2[len2] == '\0' ||
				(s2[len2] == '*' && s2[len2 + 1] == '\0'))
			return (1);
		return (0);
	}
	if (s1[len1] != s2[len2])
	{
		if (s2[len2] == '*')
			len1 -= 1;
		else if (s2[len2 - 1] == '*')
		{
			if (s2[len2] == '\0')
				return (1);
			len2 -= 1;
		}
		else
			return (0);
	}

	return (str_identify(s1, s2, len1 + 1, len2 + 1));
}


