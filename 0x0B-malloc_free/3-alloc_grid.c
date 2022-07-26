#include "msin.h"
#include <stdio.h>
/**
 * alloc_grid -returns a pointer to a 2D array of integers
 * @width: The width of the array
 * @height: The height of the array
 * Return: a pointer to the 2D array, NULL on failure
 */
char **alloc_grid(int width, int height)
{
	int i, j, k = width * height, **grid;

	if (k <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
