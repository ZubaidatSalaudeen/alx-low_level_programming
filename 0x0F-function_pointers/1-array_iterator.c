#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: The array
 * @size: The size of the array
 * action - The action to be performed on the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i <= size; i++)
	{
		action(array[i]);
	}
}
