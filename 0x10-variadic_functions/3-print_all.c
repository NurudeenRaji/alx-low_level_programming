#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything.
 * @format: the list of types of arguments.
 */

void print_all(const char * const format, ...)
{
	va_list ag;
	int i;
	char *separator;
	char *str;

	va_start(ag, format);
	separator = "";
	i = 0;
	while (format != NULL && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ag, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ag, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ag, double));
				break;
			case 's':
				str = va_arg(ag, char *);
				if (str != NULL)
				{
					printf("%s%s", separator, str);
					break;
				}
				printf("%s(nil)", separator);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(ag);
}
