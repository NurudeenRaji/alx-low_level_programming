#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocates memory for a two-dimensional array.
 * @width: the width or row size..
 * @height: height or column size.
 * Return: pointer to array or NULL.
 */

int **alloc_grid(int width, int height)
{
	int **mem;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	mem = malloc(sizeof(int *) * width);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		mem[i] = malloc(sizeof(int) * height);
		if (mem[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(mem[j]);
			}
			free(mem);
			return (NULL);
		}
	}

	return (mem);
}
