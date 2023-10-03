#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always success(0) or 1(Error);.
 */

int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
