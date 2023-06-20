#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: a dog_t variable or NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, len1 = 0, len2 = 0;
	dog_t *dog;

	for (i = 0; name[i] != '\0'; i++)
		len1 += 1;
	for (i = 0; owner[i] != '\0'; i++)
		len2 += 1;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = (char *)malloc(len1 + 1);
	dog->owner = (char *)malloc(len2 + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	dog->age = age;

	return (dog);
}
