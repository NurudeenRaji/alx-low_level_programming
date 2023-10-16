#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program entry point.
 * @argc: the argument counts.
 * @argv: argument array.
 * Return: 0(Always Suuccess).
 */

int main(int argc, char *argv[])
{
	int num1, num2, calc;
	int (*op_f)(int, int) = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_f = get_op_func(argv[2]);

	if (!op_f)
	{
		printf("Error\n");
		exit(99);
	}

	calc = op_f(num1, num2);
	printf("%d\n", calc);

	return (0);
}
