#include "main.h"
#include <stdio.h>

/**
 * _strlen - Length of a string.
 * @s: the string.
 * Return: string count.
 */

int _strlen(char *s)
{
	char st;
	int count;

	count = 0;
	st = *s;
	while (st != '\0')
	{
		count++;
	}

	return (count);
}
