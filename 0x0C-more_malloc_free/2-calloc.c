#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of nmemb elements
 * of size bytes each
 * @nmemb: number of elements
 * @size: size of array
 * Return: a pointer to the allocated memory
 * Or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;
	unsigned int len;

	i = nmemb * size;
	if (i == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (len = 0; len <= nmemb * size; len++)
		ptr[len] = 0;
	return (ptr);
}
