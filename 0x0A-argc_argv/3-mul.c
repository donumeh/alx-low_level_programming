#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies two ints
 * @argc: the number of args passed
 * @argv: the args passed
 *
 * Return: 0 if successful, 1 if not right num of arg passed
 */

int main(int argc, char **argv)
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
