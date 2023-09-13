#include <stdio.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: Parameter to check
 * Return: 1, 0, -1.
 */

int print_sign(int n)
{
	char a, b, c;

	a = '+';
	b = '0';
	c = '-1';
	if (n > 0)
		return (a,1);
	else if (n == 0)
		return (b, 0);
	else
		return (c, -1);
}
