#include "main.h"

/**
 * _isupper - checks if the alphabet is in uppercase
 * @c: accepts an integer char
 * Return: 1 if @c is uppercase; 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 89)
		return (1);
	else
		return (0);
}
