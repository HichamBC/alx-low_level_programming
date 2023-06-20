#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);


/**
 * struct dog - dog information.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Description: specefic information about a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


#endif
