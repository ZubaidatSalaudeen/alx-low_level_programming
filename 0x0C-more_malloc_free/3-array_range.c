#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: Lower limit of array
 * @max: Uppet limit of array
 * Return: pointer to the newly created array
 * Or NULL if function fails
 */
int *array_range(int min, int max)
{
	int *array, i, j = 0;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(*array));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++, j++)
		array[j] = i;
	return (array);
}
