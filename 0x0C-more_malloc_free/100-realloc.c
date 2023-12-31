#include "main.h"
#define MIN(a, b) ((a) < (b) ? (a) : (b))
/**
 * _realloc - clones realloc except it has the old size goven
 * @old_size: old size of allocated memory
 * @new_size: new memory block to be allocated
 * @ptr: previously allocated pointer
 * Return: pointer to newly allocated memry
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	size_t min_size, i;
	char *old_ptr, *new_ptr_char;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if ((new_size == 0) && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	min_size = MIN(old_size, new_size);
	old_ptr = ptr;
	new_ptr_char = new_ptr;
	for (i = 0; i < min_size; i++)
		new_ptr_char[i] = old_ptr[i];
	free(ptr);
	return (new_ptr);
}
