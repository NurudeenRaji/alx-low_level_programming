#include <stdio.h>

/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: Argument array.
 * Return: 0 (Success), 1(Error).
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	int i;

	i = 0;
	while (argc > 1)
	{
		i++;
		argc--;
	}
	printf("%d\n", i);

	return (0);
}
