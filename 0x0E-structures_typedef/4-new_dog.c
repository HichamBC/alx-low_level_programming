#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 *
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: object of dog_t.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1 = 0, len2 = 0, i, j;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;

	d->name = malloc((len1 + 1) * sizeof(char));
	if (d->name == NULL)
	{
		return (NULL);
	}

	d->owner = malloc((len2 + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (i = 0; i < (len1 * sizeof(char)); i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	for (j = 0; j < (len2 * sizeof(char)); j++)
		d->owner[j] = owner[j];
	d->owner[j] = '\0';

	d->age = age;
	return (d);
}
