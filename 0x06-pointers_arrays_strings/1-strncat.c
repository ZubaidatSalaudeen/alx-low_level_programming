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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n > 0; i++, n-- j++)
		dest[i] = src[j];
	return (dest);
}
