#include <stdio.h>

/**
 * main - prints all hex decimals and letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char hex;

	for (num = 48; num <= 57; num++)
		putchar(num);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');

	return (0);
}
