#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any set of bytes.
 * @s: the string to search.
 * @accept: the string to use in checking.
 * Return: pointer to the byte or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	if (s == NULL)
		return (NULL);

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (NULL);
}
