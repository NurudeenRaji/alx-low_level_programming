#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a number.
 * @n: the number to be calculated.
 * Return: the factorial od n or -1 for error.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
