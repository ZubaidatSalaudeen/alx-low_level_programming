#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

