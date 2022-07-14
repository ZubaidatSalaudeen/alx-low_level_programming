#include "main.h"
/**
 * string_toupper - changes all lower case letters of a string to
 * uppercase
 * @s: The string
 * Return: the capitalised string
 */

char *string_toupper(char *s)
{
	char *ptr = s;

	while (*s)
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
		s++;
	}
	return (ptr);
}
