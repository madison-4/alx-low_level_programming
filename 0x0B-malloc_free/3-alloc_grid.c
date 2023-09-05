#include "main.h"
/**
 * alloc_grid - allocate memory of a 2d array of ints
 * @width: widh f the array
 * @columns: column of the array
 * Return: pointer to ths array
 */
int **alloc_grid(int width, int columns)
{
	int **ipp, iter, iter2;

	if (width <= 0 || columns <= 0)
		return (NULL);
	ipp = malloc(columns * (sizeof(int *)));
	if (ipp == NULL)
		return (NULL);
	for (iter = 0; iter < columns; iter++)
	{
		ipp[iter] = (int *)malloc(width * sizeof(int));
		if (ipp[iter] == NULL)
		{
			for (iter2 = iter; iter2 >= 0; --iter2)
			{
				free(ipp[iter2]);
			}
			free(ipp);
			return (NULL);
		}
		for (iter2 = 0; iter2 < width; iter2++)
		{
			ipp[iter][iter2] = 0;
		}
	}
	return (ipp);
}
