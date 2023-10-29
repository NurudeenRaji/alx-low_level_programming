#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: 0(big endian), 0(little endian).
 */

int get_endianness(void)
{
	unsigned int i;
	unsigned char *ptr;

	i = 1;
	ptr = (unsigned char *)&i;
	if (*ptr == 1)
		return (0);

	return (1);

}
