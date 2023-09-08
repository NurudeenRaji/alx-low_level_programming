#include <stdio.h>

/**
 * main - Program entry point.
 *
 * Return: 0(Success), 1(Error).
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
