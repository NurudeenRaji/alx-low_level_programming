#include "main.h"

/**
 * binary_to_uint - Converts a binary to unsigned int.
 * @b: pointer to thhe string.
 * Return: the converted number or 0;
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int i;

	res = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			res = (res << 1);
		else if (b[i] == '1')
			res = (res << 1) | 1;
		else
			return (0);
	}

	return (res);
}
