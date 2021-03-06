#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2dimensional array of integer
 *@width: int
 *@height: int
 *Return: NULL if width or height ar neg or 0, returns a *[][]
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int line, col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (line = 0; line < height; line++)
	{
		grid[line] = malloc(width * sizeof(int));
		if (grid[line] == NULL)
		{
			for (col = 0; col <= line; col++)
			{
				free(grid[col]);
			}
			free(grid);
			return (NULL);
		}
		for (col = 0; col < width; col++)
		{
			grid[line][col] = 0;
		}
	}
	return (grid);
}
