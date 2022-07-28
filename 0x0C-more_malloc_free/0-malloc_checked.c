#include "main.h"
#include "stdlib.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: a pointer to tge allocated memory
 * If mallic fails, normal process termination with
 * a status value of 98 is caused
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
