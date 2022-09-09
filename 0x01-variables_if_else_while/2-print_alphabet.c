#include <stdio.h>

/**
 * main - prints the alphabets in small caps
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha_small = 'a';

	while (alpha_small <= 'z')
		putchar(alpha_small++);
	putchar('\n');

	return (0);
}
