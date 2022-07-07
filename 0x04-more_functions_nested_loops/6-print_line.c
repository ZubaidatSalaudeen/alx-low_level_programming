#include "main.h"
/**
 * print_line - print _ n number of times
 * @n: number of _ to be printed
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i > 0)
		_putchar('_');
	}
	_putchar('\n');
}
