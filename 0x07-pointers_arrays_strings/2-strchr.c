#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: the string to loop and search through.
 * @c: the character to search for.
 * Return: pointer to first occurrence of c or NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
