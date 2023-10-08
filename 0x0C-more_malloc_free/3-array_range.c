#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: the minimum values.
 * @max: the maximum values.
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i, size, *mem;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	mem = malloc(sizeof(int) * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		mem[i] = min + i;
	}

	return (mem);
}
