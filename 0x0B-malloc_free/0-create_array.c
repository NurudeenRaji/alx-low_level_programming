#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars.
 * @size: determines the size of the array with malloc.
 * @c: the character used to initialize the array.
 * Return: pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *mem;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		mem = malloc(sizeof(*mem) * size);

		if (mem ==  NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			mem[i] = c;
		}
	}

	return (mem);
}
