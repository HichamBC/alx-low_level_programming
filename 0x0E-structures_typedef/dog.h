#ifndef DOG_H
#define DOG_H


/**
 * struct dog - structure data type.
 * @name: his name.
 * @age: his age.
 * @owner: his owner.
 *
 * Description: structure data type containing properties of a dog.
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif