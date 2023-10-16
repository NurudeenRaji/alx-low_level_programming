#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parameters of a function.
 * @n: the first integer.
 * Return: the sum of the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(ag, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ag, int);
	}

	va_end(ag);
	return (sum);
}
