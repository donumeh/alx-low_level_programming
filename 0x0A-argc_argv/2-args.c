#include <stdio.h>

/**
 * main - prints the arguments passed
 * @argc: numbers of arguments
 * @argv: the strings or argument passed
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i++]);
	}

	return (0);
}
