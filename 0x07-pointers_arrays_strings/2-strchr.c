#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: the string to loop and search through.
 * @c: the character to search for.
 * Return: pointer to first occurrence of 'c' or NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
