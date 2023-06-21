#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of args passed
 * @argv: the args passed
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	unsigned char *ptr;
	int i, number_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (unsigned char *)main;

	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", ptr[i]);
		if ((i + 1) == number_of_bytes)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
