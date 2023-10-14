#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Prints a name.
 * @name: the name to print.
 * @f: the pointer to the function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}

	f(name);
}
