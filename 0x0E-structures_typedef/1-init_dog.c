#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 *
 * @d: variable of type struct dog.
 * @name: member of d.
 * @age: member of d.
 * @owner: member of d.
 *
 * Return: None
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
