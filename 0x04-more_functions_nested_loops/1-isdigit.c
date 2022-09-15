#include "main.h"

/**
 * _isdigit - check if the input is digit or not
 * @c: accepts an integer as input
 * Return: 1 if a digit; 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
