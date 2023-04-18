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
	char *namecp, *ownercp;
	int len1 = 0, len2 = 0, i, j;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;

	namecp = malloc((len1 + 1) * sizeof(char));
	if (namecp == NULL)
	{
		free(d);
		return (NULL);
	}

	ownercp = malloc((len2 + 1) * sizeof(char));
	if (ownercp == NULL)
	{
		free(namecp);
		free(d);
		return (NULL);
	}

	for (i = 0; i < (len1 * sizeof(char)); i++)
		namecp[i] = name[i];
	namecp[i] = '\0';

	for (j = 0; j < (len2 * sizeof(char)); j++)
		ownercp[j] = owner[j];
	ownercp[j] = '\0';

	d->name = namecp;
	d->age = age;
	d->owner = ownercp;
	return (d);
}
