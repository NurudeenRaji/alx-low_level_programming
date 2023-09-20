#include "main.h"
#include <stdio.h>

/**
 * _strlen - Length of a string.
 * @s: the string.
 * Return: string count.
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
	}

	return (count);
}
