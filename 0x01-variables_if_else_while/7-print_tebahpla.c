#include <stdio.h>

/**
 * main - prints the lowercase alpha backwards
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha_small;

	for (alpha_small = 'z'; alpha_small >= 'a'; alpha_small--)
		putchar(alpha_small);
	putchar('\n');

	return (0);
}
