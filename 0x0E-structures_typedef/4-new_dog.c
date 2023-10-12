#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - The new dog structure.
 * @name: Name of the new dog.
 * @age: age of the new dog.
 * @owner: owner of the new dog.
 * Return: pointer to the memory.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mem;

	mem = malloc(sizeof(dog_t));

	if (mem != NULL)
	{
		mem->name = name;
		mem->owner = owner;
		mem->age = age;
	}
	else
		return (NULL);

	return (mem);
}
