#include "variadic_functions.h"
#include <stdarg.h>
#include<stdio.h>
/**
 * print_strings - prints strings
 * @separator: a char that separates the strings
 * @n: number of strings to be printed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *string;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}

