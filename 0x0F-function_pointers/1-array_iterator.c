#include "function_pointers.h"
/**
 * array_iterator - function that executes an action on each element of an arraY
 * @array: array to be done to
 * @size: size of the array
 * @action: action to be done
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int iter;

	for (iter = 0; iter < size; iter++)
		action(array[iter]);
}
