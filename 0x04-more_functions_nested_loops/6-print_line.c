#include "main.h"

/**
 * print_line(int n) - Draws a straight line.
 * @n: Parameter.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}

int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
