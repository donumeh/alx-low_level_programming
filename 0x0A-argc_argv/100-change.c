#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints change
 * @argc: number of argument passed
 * @argv: args passed
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int change[5] = {25, 10, 5, 2, 1}, i;
	int amount, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (amount != 0)
	{
		for (i = 0; i <= 4; i++)
		{
			if (amount >= change[i])
			{
				amount -= change[i];
				count++;
				break;
			}
		}
	}

	printf("%d\n", count);
	return (0);
}
