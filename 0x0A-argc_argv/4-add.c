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
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);

			}
		}
		sum += _atoi(argv[num]);
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
