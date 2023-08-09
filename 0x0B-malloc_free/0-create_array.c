#include "main.h"
/**
 * create_array - create an array of chars and initialize itt
 * @size: array size
 * @c: char to initialize with
 * Return: pointer to array or NULl if 0
 */
char *create_array(unsigned int size, char c)
{
	char alloc[];
	int iter;

	if (size <= 0)
		return (NULL);
	alloc = malloc((sizeof(c)) * size);
	if (alloc == NULL)
		return (NULL);
	for (iter = 0; iter < size; iter++)
	{
		alloc[iter] = c;
	}
	return (alloc);
}
