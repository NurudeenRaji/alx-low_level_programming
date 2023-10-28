#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: the number to return it's bit
 * @index: the index of the bit to return.
 * Return: The bit value.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit, mask;

	if (n == 0)
		return (-1);

	if (index >= bit)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) != 0);
}
