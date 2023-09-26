#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: the string to check through.
 * @accept: the prefix to check.
 * Return: number of bytes from accept in s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i])
	{
		for  (j = 0; accept[j]; j++)
		{
			if (s[i] != accept[j])
			{
				continue;
			}
			else
				break;
		}
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
