#include <stdio.h>

/**
 * main - prints the lowercase alpha except 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha_small;

	for (alpha_small = 'a'; alpha_small <= 'z'; alpha_small++)
	{
		if (alpha_small == 'q' || alpha_small == 'e')
			continue;
		putchar(alpha_small);
	}
	putchar('\n');

	return (0);
}
