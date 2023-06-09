#include <stdio.h>

/**
 * main - prints the number of args
 * @argc: number of args passed
 * @argv: the array of args
 *
 * Return: Always 0.
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
