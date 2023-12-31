#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: Parameter to check
 *
 * Return: 1(lowercase or uppercase), 0(otherwise).
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
