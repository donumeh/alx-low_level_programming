#include "main.h"

/**
 * _islower - checks if the alpha is lowercase
 * @c: accepts a character value as argument
 * Return: 1 if c is lowercase
 * and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
