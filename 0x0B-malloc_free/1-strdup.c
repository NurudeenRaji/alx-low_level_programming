#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - deuplicates a string.
 * @str: the string to duplicate.
 * Return: pointer to duplicated string.
 */

char *_strdup(char *str)
{
	char *mem;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}

	mem = malloc(sizeof(*mem * i) + 1);

	if (mem == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		mem[j] = str[j];
	}

	mem[j] = '\0';

	return (mem);
}
