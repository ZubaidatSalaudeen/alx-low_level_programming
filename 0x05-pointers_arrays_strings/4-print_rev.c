#include "main.h"
#include <string.h>
/**
 * print_rev - prints a sring in reverse
 * @s: the string
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, j;

	j = strlen(s);
	for (i = j-i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
