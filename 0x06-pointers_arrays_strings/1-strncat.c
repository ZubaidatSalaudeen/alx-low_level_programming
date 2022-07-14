#include "main.h"

/**
 * *_strncat - concatenates two strings except that
 * it will use n bytes from src, and
 * src does not need to be terminated if it contains n or more bytes
 * @src: the source string
 * @dest: the destination string
 * @n: number of bytes to be used from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
