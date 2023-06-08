#include "main.h"

int prime_num(int, int);
/**
 * is_prime_number - is a prime number or not
 * @n: accepts an int integer
 *
 * Return: 1 if input is a prime-number and 0 if others
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_num(n, 1));
}

/**
 * prime_num - checks if value is a prime
 * @n: the first parameter
 * @i: the second paramter
 *
 * Return: 1 if prime and 0 if otherwise
 */

int prime_num(int n, int i)
{
	if ((i == (n / 2)) || (i == n))
		return (1);
	if ((i != 1) && (n % i == 0))
		return (0);
	return (prime_num(n, i + 1));

}
