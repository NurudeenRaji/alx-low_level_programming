#ifndef HEADER_H
#define HEADER_H

/**
 * struct dog - Brief description of a dog.
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the dog's owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog_t - Brief description of a dog.
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the dog's owner.
 */

typedef struct dog_s
{
	char *name;
	float age;
	char *owner;
}dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
