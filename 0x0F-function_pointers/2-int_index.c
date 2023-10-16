#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an anger.
 * @array: the array to search for.
 * @size: the size of the array.
 * @cmp: the comparison pointer function.
 * Return: index of the first element or -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
