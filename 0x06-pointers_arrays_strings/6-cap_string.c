#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all first letters of a string.
 * @str: The string to capitalize.
 * Return: The converted string.
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sep[j]; j++)
		{
			if (i == 0 || str[i - 1] == sep[j])
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i] = str[i] - 32;
				}
		}
	}
	return (str);
}
