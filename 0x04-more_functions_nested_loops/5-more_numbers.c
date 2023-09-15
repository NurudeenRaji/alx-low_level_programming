#include "main.h"
#include <stdio.h>

/**
 * more_numbers(void) - prints 10 times the number.
 */

void more_numbers(void)
{
	int i, c;

	for (i = 0; i <= 10; i++)
	{
		for (c = 1; c <= 14; c++)
		{
			if (c >= 10)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
