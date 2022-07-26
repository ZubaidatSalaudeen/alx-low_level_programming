#include "main.h" 
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array 
 * @height: height of array
 * Return: a pointer to 2-D array
 */ 
int **alloc_grid(int width, int height)
{
	int **grid, i, j, k;

	k = width * height;
	if (k <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	/*if memory is insifficient*/
	if (!grid)
		return (NULL);

	i = 0;
	while (i < height)
	{
		*(grid + i) = malloc(width * sizeof(int));
		if (!(*(grid + i)))
		{
			while (c--)
				free(*(grid + i));
			free(grid);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			*(*(grid + i) + j) = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
