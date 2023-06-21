#include "3-calc.h"

/**
 * main - calculate two operands
 * @argc: the number of args passed
 * @argv: the strings or args passed
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*ptr)(int, int);
	int result, h, u;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	h = atoi(argv[1]);
	u = atoi(argv[3]);

	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "%") == 0))
				&& u == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = ptr(h, u);
	printf("%d\n", result);

	return (0);
}
