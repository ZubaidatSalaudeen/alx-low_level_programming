#include <stdio.h>
/**
 * main - Entry point
 * Description: program to print numbers 0-9 using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
