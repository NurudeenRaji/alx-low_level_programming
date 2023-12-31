#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter.
 * @array: the array.
 * @size: the size of the array.
 * @action: the function pointer.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
