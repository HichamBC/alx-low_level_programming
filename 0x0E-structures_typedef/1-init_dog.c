#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: variable of struct dog type.
 * @name: name of d.
 * @age: age of d.
 * @owner: owner of d.
 *
 * Return: None.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
