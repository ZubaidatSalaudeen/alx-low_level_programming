#include "main.h"
/**
 * _isdigit - checks for digit (0 through 9)
 * @c: digit to be checked
 * Return: 1 if successful and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
