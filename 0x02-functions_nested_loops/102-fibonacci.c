#include <stdio.h>
/**
 * main - first 50 fabonacci numbers
 * Return: 0 for Success
 */
int main(void)
{
	long int i1 = 1, result, i2 = 2, in = 50;
	int i;

	printf("%lu, %lu, ", i1, i2);
	for (i = 2; i < in; i++)
	{
	result = i1 + i2;
	i1 = i2;
	i2 = result;
	printf("%lu", result);
	if (i != in - 1)
	printf(", ");
	}
	printf("\n");
	return (0);
}
