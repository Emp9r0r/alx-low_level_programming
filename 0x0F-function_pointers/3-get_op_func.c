#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the appropriate function to carry out the operation.
 * @s: A character representing the operator.
 *
 * Return: pointer to the function corresponds to the specified operator.
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
	int z = 0;

	while (z < 10)
	{
		if (s[0] == ops->op[z])
			break;
		z++;
	}

	return (ops[z / 2].f);
}
