#include "main.h"

/**
 * flip_bits - Flip one number to another.
 * @n: the number to flip.
 * @m: the number to flip to.
 * Return: the number of bits needed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned int count;

	res = n ^ m;
	count = 0;

	while (res != 0)
	{
		count += res & 1;
		res >>= 1;
	}

	return (count);
}
