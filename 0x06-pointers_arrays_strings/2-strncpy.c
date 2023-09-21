#include "main.h"
#include  <stdio.h>

/**
 * _strncpy - Copies a string.
 * @dest: destination string.
 * @src: source string.
 * @n: number of strings to copy.
 * Return: the string copied.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
