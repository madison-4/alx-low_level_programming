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

	ipp = malloc(columns * (sizeof(int *)));
	for (iter = 0; iter < columns; iter++)
	{
		ipp[iter] = (int *)malloc(width * sizeof(int));
		for (iter2 = 0; iter2 < width; iter2++)
		{
			ipp[iter][iter2] = 0;
		}
	}
	return (ipp);
}
