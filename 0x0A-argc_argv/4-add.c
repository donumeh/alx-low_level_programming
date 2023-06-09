#include <stdio.h>
#include <string.h>

int _atoi(char *, int *);
/**
 * main - prints the sum of num passed in CLI
 * @argc: the number of args passed
 * @argv: args passed
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum, i, flag = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		sum += _atoi(argv[i], &flag);
		if (flag == 1)
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * _atoi - converts a char to int
 * @s: a string
 * @flag: to check if letters are passed
 *
 * Return: value
 */

int _atoi(char *s, int *flag)
{
	int i = 0, value = 0;

	while (s[i] != '\0')
	{
		value = (value * 10) + (s[i] - '0');
		if (s[i] < '0' || s[i] > '9')
			*flag = 1;
		i++;
	}
	return (value);
}
