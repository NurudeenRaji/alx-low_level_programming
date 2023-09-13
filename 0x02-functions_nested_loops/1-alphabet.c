#include <stdio.h>
#include "main.h"

/**
 * main - Program entry point.
 * print_alphabet - Function prints alphabets in lowercase.
 *
 * Return: 0(Success), 1(Error).
 */

int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

}
