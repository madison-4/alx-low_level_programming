#include "main.h"
/**
 * array_range - create an array of integers and d set them with values
 * ordered from min to max
 * @min: minimumvalue
 * @max: maximum value
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *array, size, iter;

	if (min > max)
		return (NULL);
	array = malloc((max - min) + 1);
	if (!(array))
		return (NULL);
	size = (max - min) + 1;
	for (iter = 0; iter < size; iter++, min++)
		array[iter] = min;
	return (array);
}
