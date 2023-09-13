#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: parameter to check.
 *
 * Return: 0(Success), 1(Error).
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
		return (n);
	}
	else
		return (n);
}
