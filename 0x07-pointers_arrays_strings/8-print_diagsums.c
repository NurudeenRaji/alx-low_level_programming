#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals.
 * @a: the pointer to the array.
 * @size: size of the array.
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + (size - 1 - i)];
		sum2 += a[i * size + i];
	}

	printf("%d, %d\n", sum2, sum1);
}
