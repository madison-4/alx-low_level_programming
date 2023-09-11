#include "dog.h"
/**
 * init_dog - initialize the dog struct
 * @d: dog pointer
 * @name: name of the dog
 * @age: age of teh dog
 * @owner: of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
