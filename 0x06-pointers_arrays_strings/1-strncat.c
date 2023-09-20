#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two string with null.
 * @dest: Destination string.
 * @src: Source string.
 * @n: number of strings to add.
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char  *src, int n)
{
	int i, len1, len2, j, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	len1 =  i;
	for (j = 0; src[j] != '\0'; j++)
	{
	}
	len2 = j;

	for (k = 0; k < n; k++)
	{
		dest[len1 + k] = src[k];
	}

	if (n < len2)
		dest[len1 + n] = '\0';
	else
		dest[len1 + len2] = '\0';

	return (dest);
}
