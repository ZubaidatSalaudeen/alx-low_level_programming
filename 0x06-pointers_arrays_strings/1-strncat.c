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
	int length = 0, c;
	
	while (dest[length] != '\0')
		length++;
	
	for (c = 0; c < n ; c++, length++)
		dest[length] = src[c];
	
	return (dest);
}
