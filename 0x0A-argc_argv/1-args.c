#include <stdio.h>

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
