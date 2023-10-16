#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints the numbers entered as argument.
 * @seperator: seperates the printed output.
 * @n: number of integer passed.
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;

	va_start(ag, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && seperator != NULL)
		{
			printf("%s", seperator);
		}
		printf("%d", va_arg(ag, int));
	}
	printf("\n");

	va_end(ag);
}
