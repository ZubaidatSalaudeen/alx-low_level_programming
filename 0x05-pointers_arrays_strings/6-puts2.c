#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str: the string
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
