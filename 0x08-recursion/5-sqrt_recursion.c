#include "main.h"
#include <stdio.h>

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Natural square of a number.
 * @n: the number to calculate.
 * Return: square root of n or -1 for error.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - Helps to iterates through all the number.
 * @n: the naatural number.
 * @i: iterator
 * Return: recursion of the function or -1 for error.
 */

int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}
