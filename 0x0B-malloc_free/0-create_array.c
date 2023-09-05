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
	int fill;

	alloc = malloc(sizeof(char) * size);
	if (alloc == NULL)
		return (NULL);
	for (fill = 0; fill < size; fill++)
	{
		alloc[size] = c;
	}
	return (alloc);
}
