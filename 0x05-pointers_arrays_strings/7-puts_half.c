#include "main.h"
#include <stdio.h>

/**
 * puts_half - Printss the second half of a string.
 * @str: the string.
 */

void puts_half(char *str)
{
	int i, j, n, length_of_the_string;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	length_of_the_string = i;
	n = (length_of_the_string - 1) / 2;

	for (j = n + 1; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
