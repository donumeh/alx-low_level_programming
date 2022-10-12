#include "3-calc.h"

/**
 * get_op_func - gets the operator used
 * @s: second argument passed in the CLI
 * Return: in
 */
int (*get_op_func(char *s))(int n1, int n2)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
