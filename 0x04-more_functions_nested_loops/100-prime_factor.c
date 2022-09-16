#include "main.h"
long int largest_prime_factor(long int n);

/**
 * main - prints the prime factor of a num
 * Return: Always 0
 */
int main(void)
{
	long int n = 612852475143, highest_prime_factor;

	highest_prime_factor = largest_prime_factor(n);

	printf("%ld\n", highest_prime_factor);

	return (0);
}

/**
 * largest_prime_factor - prints the largest prime factor
 * @n: accepts an int variable
 * Return: prime factor
 */
long int largest_prime_factor(long int n)
{
	long int prime_factor = 1;
	long int div = 2;

	while (div < (n / div))
	{
		if (n % div == 0)
		{
			prime_factor = 1;
			n = n / div;
		}
		else
			div++;
	}

	if (prime_factor < n)
		prime_factor = n;

	return (prime_factor);
}
