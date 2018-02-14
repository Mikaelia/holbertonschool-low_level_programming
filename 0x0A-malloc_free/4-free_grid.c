#include <stdlib.h>
#include <stdio.h>
/**
  * free_grid - frees multidemensional grid
  * @grid: multidemensional array
  * @height: height of array
  *
  * Return: pointer to multi-dimensional array
  */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
