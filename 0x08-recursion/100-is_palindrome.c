#include "main.h"
#include <string.h>

int palindrome(char *, int, int);
/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string to check
 *
 * Return: returns 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len2 = strlen(s) - 1;
	int check = 1;

	if (s == NULL || *s == '\0')
		return (1);
	check = palindrome(s, 0, len2);

	return (check);
}

/**
 * palindrome - checks if a value is palindrome
 * @s: the string to check
 * @len1: the starting position of the string
 * @len2: the ending of the string
 *
 * Return: 1 if palindrome, 0 if otherwise
 */

int palindrome(char *s, int len1, int len2)
{
	if (len2 < 0)
		return (1);
	if (s[len1] != s[len2])
		return (0);
	return (palindrome(s, len1 + 1, len2 - 1));

}
