#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_dog - creates a new dog
 * @d: struct variable
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(dog_info->name);
	free(dog_info->age);
	free(dog_info->owner);
	free(d);
}
