#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the string that holds the binary
 *
 * Return: int value of binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int error = 0, num_of_chars, i = 0;

	if (b == NULL)
		return (0);
	num_of_chars = _strlen(b);
	num_of_chars -= 1;

	while (num_of_chars >= 0)
	{
		sum += char_to_int(b[num_of_chars], &error) * _pow(2, i);
		if (error == -1)
			return (0);
		i++;
		num_of_chars--;
	}
	return (sum);
}

/**
 * _strlen - finds the characters in a string
 * @str: the string to find the number of characters in
 *
 * Return: num of characters in string
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * char_to_int - converts a char to int
 * @c: the char to convert
 * @error: to check for an error
 *
 * Return: the conversion
 */

unsigned int char_to_int(char c, int *error)
{
	if (c < '0' || c > '9')
		*error = -1;
	return (c - '0');
}

/**
 * _pow - checks the exponent of a value
 * @value: the value to check
 * @i: the exponent
 *
 * Return: the total calculation
 */

unsigned int _pow(int value, int i)
{
	if (i == 0)
		return (1);
	return (value * _pow(value, i - 1));
}
