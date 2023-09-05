#include "main.h"
/**
 * create_array - creates an array of chars and initializes them
 * @size: size of array
 * @c: character to initialize
 * Return: pointer to initialized array,. or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *alloc;
	unsigned int fill;

	if (size <= 0)
		return (NULL);
	alloc = malloc(sizeof(char) * size);
	if (alloc == NULL)
		return (NULL);
	for (fill = 0; fill < size; fill++)
	{
		alloc[fill] = c;
	}
	return (alloc);
}
