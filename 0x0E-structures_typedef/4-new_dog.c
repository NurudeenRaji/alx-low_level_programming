#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	int i, len1, len2;

	mem = malloc(sizeof(dog_t));
	if (mem == NULL)
		return (NULL);

	len1 = 0;
	while (name[len1] != '\0')
		len1++;
	mem->name = malloc((len1) + 1);
	if (mem->name == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		mem->name[i] = name[i];

	len2 = 0;
	while (owner[len2] != '\0')
		len2++;
	mem->owner = malloc((len2) + 1);
	if (mem->owner == NULL)
		return (NULL);
	for (i = 0; owner[i] != '\0'; i++)
		mem->owner[i] = owner[i];

	mem->age = age;

	return (mem);
}
