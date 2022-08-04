#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * print_char - prints char
 * @list: arg
 * Return: nothing
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_string - prints string
 * @list: arg
 * Return: nothing
 */

void print_string(va_list list)
{
	char *string;

	string = va_arg(list, char*);
	if (string == NULL)
		string = "(nil)";
printf("%s", string);
}
/**
 * print_integer - prints integer
 * @list: arg
 * Return: nothing
 */

void print_integer(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * print_float - prints float
 * @list: arg
 * Return: nothing
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_all - prints everything
 * @format: the format of the string
 * Return: nothing
 */
void print_all(const char * const format, ...)

{
	unsigned int i, j;
	_print t[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_integer},
		{"f", print_float},
		{NULL, NULL}
	};
	va_list valist;
	char *s = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (t[j].c != NULL)
		{
			if (*(t[j].c) == format[i])
			{
				printf("%s", s);
				t[j].f(valist);
				s = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
