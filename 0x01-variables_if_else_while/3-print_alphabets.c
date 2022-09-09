#include <stdio.h>

/**
 * main - prints the alpha in upper and lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha_small = 'a';
	char alpha_upper = 'A';

	while (alpha_small <= 'z')
		putchar(alpha_small++);
	while (alpha_upper <= 'Z')
		putchar(alpha_upper++);
	putchar('\n');

	return (0);
}
