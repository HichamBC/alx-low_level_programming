#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform a specific operation.
 * @s: The operator passed as an argument to the program.
 *
 * Return: Pointer to the function that corresponds to the operator or NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
