#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Frees a dog.
 * @d: pointer to the size of the memory.
 */

void free_dog(dog_t *d)
{
	free(d);
}
