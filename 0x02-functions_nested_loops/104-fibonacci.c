#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - first 98 fabonacci numbers
 * Return: 0 for Success
 */
int main(void)
{
	unsigned long int fr1 = 0, bk1 = 0, fr2 = 0, bk2 = 0;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
	if (bk1 + bk2 > LARGEST || fr2 > 0 || fr1 > 0)
	{
	hold1 = (bk1 + bk2) / LARGEST;
	hold2 = (bk1 + bk2) % LARGEST;
	hold3 = fr1 + fr2 + hold1;
	fr1 = fr2, fr2 = hold3;
	bk1 = bk2, bk2 = hold2;
	printf("%lu010%lu", fr2, bk2);
	}
	else
	{
	hold2 = bk1 + bk2;
	bk1 = bk2, bk2 = hold2;
	printf("%lu", bk2)
	}
	if (count != 97)
	printf(", ");
	}
	printf("\n");
	return (0);
}
