#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - alloccates memory for an array.
 * @nmemb: elements of the array.
 * @size: the size of the array.
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)mem)[i] = 0;
	}


	return (mem);
}
