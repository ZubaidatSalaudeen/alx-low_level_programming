#include "main.h"
/**
 * print_last_digit - print last digit of number
 * @x: the number
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int y;
	if (x < 0)
	x = -x;
	y = (x % 10);
	_putchar(y + '0');
	return (y);
}
