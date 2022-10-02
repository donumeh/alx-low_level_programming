#include <stdio.h>
#include <stdlib.h>

int _atoi(char *c);
/**
 * main - multiplies two int args
 * @argc: numbers of args
 * @argv: the strings or args passed
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		int i;

		for (i = 1; i < 3; i++)
		{
			sum *= _atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	exit(EXIT_SUCCESS);
}

/**
 * _atoi - converts char to int
 * @c: accepts a char value
 * Return: int
 */
int _atoi(char *c)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (c[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; c[i] != '\0'; i++)
		res = res * 10 + c[i] - '0';
	return (sign * res);
}
