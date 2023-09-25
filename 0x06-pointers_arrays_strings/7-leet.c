#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: thestring to encode.
 * Return: returns the encoded string.
 */

char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == c[j])
				str[i] = num[j];
		}
	}
	return (str);
}
