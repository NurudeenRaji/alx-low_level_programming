#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees a 2-dimensional grid.
 * @grid: the 2-dimensional grid.
 * @height: the height.
 */

void free_grid(int **grid, int height)
{
	int **mem;
	int i;

