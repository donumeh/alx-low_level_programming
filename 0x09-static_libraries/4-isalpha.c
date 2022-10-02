#include "main.h"

/**
 * _isalpha - checks if argument is an alpha
 * @c: accepts a parameter
 * Return: 1 if it's an alpha
 * 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
