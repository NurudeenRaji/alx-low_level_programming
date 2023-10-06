#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: pointer to cconcatenated string.
 */

char *str_concat(char  *s1, char *s2)
{
	char *mem;
	int len1, len2, i;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	len1 = 0;
	if (s1 !=  NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	len2 = 0;
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	mem = malloc(sizeof(char) * (len1 + len2 + 1));
	if (mem == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			mem[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; i < len2; i++)
		{
			mem[i + len1] = s2[i];
		}
	}
	mem[len1 + len2] = '\0';
	return (mem);
}
