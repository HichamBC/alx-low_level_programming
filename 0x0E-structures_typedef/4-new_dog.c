#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: pointer to variable of type dog_t or NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, l1 = 0, l2 = 0;
	dog_t n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		l1 += 1;
	for (i = 0; owner[i] != '\0'; i++)
		l2 += 1;

	n_dog->name = malloc(l1 + 1);
	n_dog->owner = malloc(l2 + 1);

	if (n_dog->name == NULL || n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = '\0';
	n_dog->age = age;

	return (n_dog);
}
