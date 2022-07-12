#include "main.h"
/**
 * _strcpy - copies the string pointed by src
 * including the terminating null byte
 * to the buffer pointed to by dest
 * @dest: the destination
 * @src: the source
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length])
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = '\0';

	return (dest);
}
