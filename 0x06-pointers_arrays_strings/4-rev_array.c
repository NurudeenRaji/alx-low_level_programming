#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array.
 * @a: String to reverse
 * @n: the number of array
 */

void reverse_array(int *a, int n)
{
	int j;
	int c;

	for (j = 0; j < (n / 2); j++)
	{
		c = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = c;
	}

}
