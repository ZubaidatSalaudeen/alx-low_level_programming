#include "main.h"
/**
 * print_last_digit - print last digit of number
 * @x: the number
 * Return: the last digit
 */
int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
	x = x * -1;
	_putchar('0' + x);
	return (x);
}
