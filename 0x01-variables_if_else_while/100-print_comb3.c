#include <stdio.h>
/**
 * main -Entry point
 * Description: program to print diff combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
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
=======
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
>>>>>>> ad032d0ab255c0724757582914d196b9f43f542b
	}
	putchar('\n');
	return (0);
}
