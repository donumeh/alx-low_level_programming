#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, a, b, temp;

	a = b = 1;

	for (i = 0; i < 98; i++)
	{
		if (i == 97)
			printf("%lu", a);
		else if (i != 97)
			printf("%lu, ", a);
		temp = a;
		a += b;
		b = temp;
	}
	printf("\n");

	return (0);
}
