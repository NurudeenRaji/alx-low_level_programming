#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the number.
 */

void more_numbers(void)
{
	int i, c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
