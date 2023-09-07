#include "main.h"
/**
 * malloc_checked - checks the return of malloc and exits
 * @b: size of memry to allocate
 * Return: void pointer to allocated memory or exits the program
 */
void *malloc_checked(unsigned int b)
{
	void *ans = malloc(b);

	if (ans == NULL)
		exit(98);
	else
		return (ans);
}
