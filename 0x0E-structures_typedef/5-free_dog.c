#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: dog_t type variable.
 *
 * Return: None.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
