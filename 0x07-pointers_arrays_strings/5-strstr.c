#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to check through.
 * @needle: the substring to check for.
 * Return: pointer to begining of located substring or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
