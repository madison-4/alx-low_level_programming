#include "dog.h"
/**
 * print_dog - print the contents of the dog struct
 * @d: pointer to dog struct
 * Return: no return value
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
