#include "main.h"

/**
 * *_strncat - concatenates two strings except that
 * it will use n bytes from src, and
 * src does not need to be terminated if it contains n or more bytes
 * @src: the source string
 * @dest: the destination string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n; j++, i++)
		dest[i] = src[j];
	return(dest);
}
