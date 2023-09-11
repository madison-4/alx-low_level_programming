#include "dog.h"
/**
 * print_dog - print the contents of the dog struct
 * @d: pointer to dog struct
 * Return: no return value
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		if (!(d->name))
			printf("Name: (nil)\n");
		printf("Age: %f\n", (d->age) ? (d->age) : 0);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		if (!(d->owner))
			printf("Owner: (nil)\n");
	}
}
