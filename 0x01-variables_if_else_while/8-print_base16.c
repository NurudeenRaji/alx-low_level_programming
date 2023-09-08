#include <stdio.h>


/**
 * main - Program entry point.
 *
 * Return: 0(Suceess), 1(Error).
 */

int main(void)
{
	char c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	for (c = 97; c <= 102; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
