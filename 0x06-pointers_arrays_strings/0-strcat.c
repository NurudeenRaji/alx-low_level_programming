#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 * Return: return a pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
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

	for (k = 0; k <= len2; k++)
	{
		dest[len1 + k] = src[k];
	}

	dest[len1 + len2] = '\0';

	return (dest);
}
