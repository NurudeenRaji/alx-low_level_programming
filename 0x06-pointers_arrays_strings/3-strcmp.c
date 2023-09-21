#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: 0(Succes), 1(Error).
 */

int _strcmp(char *s1, char *s2)
{
	int i, check, diff;

	check = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0';  i++)
	{
		if (s1[i] != s2[i])
		{
			check = 1;
			break;
		}
	}

	if (check == 1)
	{
		diff = s1[i] - s2[i];
	}
	else
		return (0);

	return (diff);
}
