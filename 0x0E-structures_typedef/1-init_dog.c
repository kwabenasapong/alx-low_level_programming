#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - intializes the dog struct
 * @d: struct dog variable
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: d (dog's info)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

	return;
}

