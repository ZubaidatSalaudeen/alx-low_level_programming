#include <stdio.h>
/**
 * main - Entry point
 * Description: program to print single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		putchar(',');
		if (i < 9)
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
