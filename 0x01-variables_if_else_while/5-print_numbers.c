#include <stdio.h>

/**
 * main - prints all single digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		printf("%d", digit);
	putchar('\n');

	return (0);
}
