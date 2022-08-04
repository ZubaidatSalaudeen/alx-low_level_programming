#include "variadic_functions.h"
/**
 * sum_them_all - sums up all its parameters
 * @n: number of integers passed to the function
 * Return: The sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	double sum = 0;

	if (n == 0)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
