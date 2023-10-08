#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * malloc_checked - allocate with malloc and exit  with 98.
 * @b: size of the memory
 */

void  *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (mem != NULL)
	{
		return (mem);
	}
	else
	{
		printf("Too large memory\n");
		exit (98);
	}
}
