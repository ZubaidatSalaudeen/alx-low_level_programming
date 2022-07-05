#include "main.h"
/**
 * main - Entry point
 * Description: Program to print alphabets 10 times
 * Return: 0 (Successful)
 */
int main(void)
{
	int j;
	char ch;

	for (j = 0; j < 10; j++)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');
	}
	return (0);
}
