#include <stdio.h>

/**
 * main - prints the args passed
 * @argc: the number of args passed
 * @argv: the args passed
 *
 * Return: Always 1
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
