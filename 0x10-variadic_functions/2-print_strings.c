#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings.
 * @separator: seperates the strings printed.
 * @n: number of string passed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;
	char *str;

	va_start(ag, n);
	for (i = 0; i < n; i++)
	{
		str  = va_arg(ag, char *);
		if (seperator != NULL && i > 0)
		{
			printf("%s", seperator);
		}
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	printf("\n");

	va_end(ag);
}
