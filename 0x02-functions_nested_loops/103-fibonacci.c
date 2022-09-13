#include <stdio.h>

/**
 * main - prints fibonacci and sums teh even numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, a, b, temp, sum = 0;
	a = b = 1;

	for (i = 0; i < 34; i++)
	{
		if ((a % 2) == 0)
			sum += a;
		temp = a;
		a += b;
		b = temp;
	}
	printf("%lu\n", sum);

	return (0);
}
