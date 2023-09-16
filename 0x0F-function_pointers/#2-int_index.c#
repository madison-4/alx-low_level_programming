#include "function_pointers.h"
/**
 * int_index - search for an int in an array
 * @array: array to be searched
 * @size: size of the array
 * @cmp: function to compare
 * Return: index of first ele,ent that matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int iter, index = 0;

	if (size <= 0)
		return (-1);
	if ((array == NULL) || (cmp == NULL))
		return (-1);
	for (iter = 0; iter < size; iter++)
	{
		index = cmp(array[iter]);
		if (index)
			return (iter);
	}
	return (-1);
}
