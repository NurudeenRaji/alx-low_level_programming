#include "main.h"

/**
 * print_binary - Print binary of a decimal.
 * @n: the number to print it binary.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	i = 1;
	while (mask > 0)
	{
		if  ((n & mask) != 0)
			i = 0;
		if (!i)
		{
			if ((n & mask) != 0)
				_putchar('1');
			else
				_putchar('0');
		}
		mask >>= 1;
	}
}
