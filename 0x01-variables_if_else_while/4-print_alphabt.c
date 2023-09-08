#include <stdio.h>

/**
 * main - Program entry point.
 *
 * Return: 0(Succes), 1(Error).
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');

	return (0);
}
