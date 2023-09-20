#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: the string.
 */

void rev_string(char *s)
{
	int i, j, k;
	/*char *c;*/

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	j = i - 1;

	for (k = 0; k < j; k++, j--)
	{
		char temp = s[k];

		s[k] = s[j];
		s[j] = temp;
	}
}
