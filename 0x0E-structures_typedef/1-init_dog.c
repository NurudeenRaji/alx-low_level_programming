#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: pointer to memory.
 * @name: pointer to name of the dog.
 * @age: the age of the dog.
 * @owner: pointer to owneer of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
