#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 ata index.
 * @n: the number to convert to biinary.
 * @index: the index to set.
 * Return: 1(Success), -1(Error).
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit = sizeof(unsigned long int) * 8;

	if (n == 0)
		return (-1);

	if (index >= bit)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
