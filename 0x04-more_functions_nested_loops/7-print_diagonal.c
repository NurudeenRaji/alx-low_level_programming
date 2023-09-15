#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal  line.
 * @n: Parameter.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}

int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	return (0);
}
