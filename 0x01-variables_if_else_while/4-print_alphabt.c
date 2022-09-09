#include <stdio.h>

/**
 * main - prints the lowercase alpha except 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha_small = 'a';

	while (alpha_small <= 'z')
	{
		if (alpha_small == 'q' || alpha_small == 'e')
			continue;
		else
			putchar(alpha_small++);
	}
	putchar('\n');

	return (0);
}
