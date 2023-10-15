#include <stdio.h>
#include "functions_pointers.h"

/**
 * array_iterator - executes a function as a parameter.
 * @array: the array.
 * @size: the size of the array.
 * @action: the function pointer.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
