#include <stdio.h>

/**
 * main - prints digits using ascii
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
