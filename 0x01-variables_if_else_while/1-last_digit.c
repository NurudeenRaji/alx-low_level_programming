#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0(Success), 1(Error)
 */

int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	i = n % 10;
	if (i > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	if (i == 0)
		printf("Last digit of %d is %d and is 0\n", n, i);
	if (i < 6 && i != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	return (0);
}
