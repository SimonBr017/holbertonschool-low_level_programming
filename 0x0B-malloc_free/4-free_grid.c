#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free the previous grid created by alloc_grid
 *@grid: pointer to a 2dimensional array of int
 *@height: int
 *Return: void
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
