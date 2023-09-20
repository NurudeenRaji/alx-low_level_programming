#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string
 * @str: the string.
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
