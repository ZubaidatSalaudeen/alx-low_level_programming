#include <stdio.h>
/**
 * main - list all natural numbers that are multiples of 3 & 5, less than 1024
 * Return: 0 for Success
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
