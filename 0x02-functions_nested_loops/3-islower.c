#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: parameter value of the function
 *
 * Return: 1(lowercase), 0(Uppercase).
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	} else
		return (0);
}
