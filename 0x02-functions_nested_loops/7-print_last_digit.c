#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: Parameter used
 *
 * Return: 0(Success), 1(Error).
 */

int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		n *= -1;
	digit = n % 10;
	return (digit);
}

