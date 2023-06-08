#include "main.h"

int __sqrt__(int n, int i);
/**
 * _sqrt_recursion - the square root of a number
 * @n: the number
 *
 * Return: squareroot of the number
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (__sqrt__(n, 1));
}


/**
 * __sqrt__ - finds the square root of number
 * @n: the number
 * @i: an iterator
 *
 * Return: square root
 */

int __sqrt__(int n, int i)
{
	if (n == i || n < 0)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (__sqrt__(n, i + 1));
}
