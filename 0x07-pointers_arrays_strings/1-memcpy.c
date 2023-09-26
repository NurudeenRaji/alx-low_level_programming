#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies memory area.
 * @dest: the destination memory.
 * @src:  the source memory.
 * @n: the bytes of memory to copy from the source.
 * Return: pointer to the destination.
 */

char *_memcpy(char *dest, char *src, unsigned  int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
