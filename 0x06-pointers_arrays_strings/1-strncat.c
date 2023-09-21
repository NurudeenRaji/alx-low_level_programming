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
	int i, len1, k;
	int j, len2;

	/* Calculating the length of string 'dest' */
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	len1 =  i;

	/* Calculating the length of string 'dest' */
	for (j = 0; src[j] != '\0'; j++)
	{
	}
	len2 = j;

	/* Appending the specified number from src to dest */
	for (k = 0; k < n; k++)
	{
		if (src[k] != '\0') /*Incase 'src' is null*/
			dest[len1 + k] = src[k];
		else
			break;
	}

	/* Reallocating the memory to end with null */
	if (n < len2)
		dest[len1 + n] = '\0';
	else
		dest[len1 + len2] = '\0'; /*Incase n is greater  than size of dest */

	return (dest);
}
