#include "main.h"

/**
 * _islower - checks if the alpha is lowercase
 *
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
