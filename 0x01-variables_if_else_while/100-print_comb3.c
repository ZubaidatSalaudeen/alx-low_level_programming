#include <stdio.h>
/**
 * main -Entry point
 * Description: program to print diff combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
	{
		if (i < j)
	{
		putchar(i + '0');
		putchar(j + '0');
		if (i != 8)
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
