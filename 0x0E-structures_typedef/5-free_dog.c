#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs.
 *
 * @d: object of dog_t.
 *
 * Return: None.
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
