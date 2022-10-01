#include <stdio.h>
#include <stdlib.h>

int _atoi(char *c);
/**
 * main - adds more numbers a prints the result
 * @argc: the numbers of args
 * @argv: the strings or args added tto the args
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		exit (EXIT_FAILURE);
	}

	for (i = 1; i < argc; i++)
	{
		sum += _atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * _atoi - coverts char to int
 * @c: char input
 * Return: int
 */
int _atoi(char *c)
{
	int res = 0, i = 0, sign = 1;

	if (c[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; c[i] != '\0'; i++)
	{
		res = res * 10 + c[i] - '0';
	}

	return (sign * res);
}
