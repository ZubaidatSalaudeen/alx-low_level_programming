#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array if characters
 * and intializes it to a specific character
 * @size: The size of the array
 * @c: the chracter to be initialized to
 * Return: a pointer to the array,
 * NULL if it fails or size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (a == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		a[i] = c;
	return (a);
}
