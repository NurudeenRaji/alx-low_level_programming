#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Print nnumbers except 2 and 4.
 */

void print_most_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		if (c == 50 || c == 52)
			continue;
		else
			_putchar(c);
	}
	_putchar('\n');
}
