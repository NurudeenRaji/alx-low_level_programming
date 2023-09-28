#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: the string to reverse.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
