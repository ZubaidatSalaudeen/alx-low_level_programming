#include <stdio.h>
/**
 * main -Entry point
 * Description: program to print diff combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 1;

	while (i < 10)
	{
		while (j < 10)
		if (i >= j)
	{
		putchar(i + '0');
		putchar(j + '0');
		j++;
	}
		i++;
	}
	if ((i != 8) && (j != 9))
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
