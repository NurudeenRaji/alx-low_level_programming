#include <stdio.h>

/**
 * main - Program entry point.
 *
 * Return: 0(Success), 1(Error).
 */

int main(void)
{
	int i;

	i = '0';
	do {
		putchar(i);
		if (i == '9')
			break;
		putchar(',');
		putchar(' ');
		i++;
	} while (i <= '9');

	putchar('\n');

	return (0);
}
