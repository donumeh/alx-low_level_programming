#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, temp, i;

	a = b = 1;

	for (i = 1; i < 50; i++)
	{
		if (i == 49)
			printf("%lu", a);
		else
			printf("%lu, ", a);
		temp = a;
		a += b;
		b = temp;
	}
	printf("\n");

	return (0);
}
