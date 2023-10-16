#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - Points to the operator element of the array.
 * @s: the operator passed argument.
 * Return: pointer to the corresponding operator.
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
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (s != NULL && strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
