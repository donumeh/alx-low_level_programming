#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of argument passed
 * @argv: the array to CLI
 *
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
