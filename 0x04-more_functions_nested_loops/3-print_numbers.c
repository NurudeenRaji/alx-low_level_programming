#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print numbers from 0 to 9.
 */

void print_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
