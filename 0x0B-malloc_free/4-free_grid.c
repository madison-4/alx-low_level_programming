#include "main.h"
/**
 * free_grid - free a grid of dynamically allocated array
 * @grid: double pointer to the grid
 * @height: number of columns of the array
 * no return
 */
void free_grid(int **grid, int height)
{
	int iter = 0;

	for (iter = 0; iter < height; iter++)
		free(grid[iter]);
	free(grid);
}
