#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: Program to print alphabets 10 times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int j;
	char ch;

	for (j = 0; j < 10; j++)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');
	}
}
