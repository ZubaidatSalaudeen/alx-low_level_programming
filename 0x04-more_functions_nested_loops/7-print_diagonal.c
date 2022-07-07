#include "main.h"
/**
 * print_diagonal - prints a diagonal line by printing \ n times
 * @n: number of \ to be printed
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{

	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= i; j++)
	{
	if (j > 0 && j != i)
		_putchar(' ');
	else if (j > 0 && j == i)
		_putchar('\\');
	}
	if (j > 0 && i != 0)
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
