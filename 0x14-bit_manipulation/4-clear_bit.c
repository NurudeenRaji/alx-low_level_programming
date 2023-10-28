#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0.
 * @n: the number to change to binary.
 * @index: the index of the bit to change
 * Return: 1(Success), -1(Error).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit = sizeof(unsigned long int) * 8;

	if (n == 0)
		return (-1);

	if (index >= bit)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
