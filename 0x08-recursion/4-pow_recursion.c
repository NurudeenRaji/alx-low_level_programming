#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - raises the power of a number to another.
 * @x:  the number to find its power.
 * @y: the power to raise to.
 * Return: the result.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
