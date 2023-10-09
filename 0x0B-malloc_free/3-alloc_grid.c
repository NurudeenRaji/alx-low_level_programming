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
	int i, j, k;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	mem = malloc(height * sizeof(int *));
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mem[i] = malloc(width * sizeof(int));
		if (mem[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(mem[k]);
			}
			free(mem);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			mem[i][j] = 0;
	}

	return (mem);
}
