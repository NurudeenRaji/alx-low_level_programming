#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the size of the memory.
 * Return: a pointer to reallocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int i, len1;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	mem = malloc(sizeof(char) * (len1 + n + 1));
	if (mem == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			mem[i] = s1[i];
		}
		for (i = 0; i < n && s2[i] != '\0'; i++)
		{
			mem[len1 + i] = s2[i];
		}
		mem[len1 + i] = '\0';
	}
	return (mem);
}
