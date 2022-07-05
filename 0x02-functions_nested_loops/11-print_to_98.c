#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the startpoint
 */
void print_to_98(int n)
{
	scanf("%d", &n);
	while (n <= 98)
	{
	if (n < 10)
	{
	_putchar(n + '0');
	_putchar(',');
	_putchar(' ');
	}
	else if (n >= 10)
	{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar(',');
	_putchar(' ');
	}
	n++;
	}
	while (n >= 98)
	{
	if (n < 10)
	{
	_putchar(n + '0');
	_putchar(',');
	_putchar(' ');
	}
	else if (n >= 10)
	{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar(',');
	_putchar(' ');
	}
	n++;
	}
}
