#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner)
#include<stdlib.h>
	
/**
 * struct dog - describes a dog and features
 * @name: name of the dog
 * @age: age of the dog
 * @owner: ower of the fdog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
