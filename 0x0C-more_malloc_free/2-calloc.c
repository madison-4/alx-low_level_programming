#include "main.h"
/**
 * _calloc - copy calloc's functionality
 * @nmemb: number of elements
 * @size: size of each element;
 * Return: no return, but a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int iter;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (iter = 0; iter < (nmemb * size); iter++)
		ptr[iter] = 0;
	return (NULL);
}
