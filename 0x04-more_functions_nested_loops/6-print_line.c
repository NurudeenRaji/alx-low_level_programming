#include "main.h"

/**
 * print_line - Draws a straight line.
 * @n: Parameter.
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
			_putchar('_');
		else
			_putchar('\n');
	}
	_putchar('\n');
}
