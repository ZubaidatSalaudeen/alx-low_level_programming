#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number entered
 * Return: 1 for +ve n, 0 for n=0 and -1 for -ve value
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
