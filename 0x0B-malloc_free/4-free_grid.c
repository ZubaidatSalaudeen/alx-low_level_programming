#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid previously created by allic_grid
 * @grid: The grid
 * @height: height of tge grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
