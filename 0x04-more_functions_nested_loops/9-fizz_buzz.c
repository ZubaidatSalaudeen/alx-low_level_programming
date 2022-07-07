#include <stdio.h>
/**
 * main - prints numbers from 1-100 .
 * but for multiples of 3, Fizz is printed
 * multiples of 5, Buzz is printed
 * And FizzBuzz is printed for multiples of both 3 and 5
 * Return: 0 for success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");
		else if (i % 3 == 0)
		printf("Fizz");
		else if (i % 5 == 0)
		printf("Buzz");
		else
		printf("%d", i);
		if (i != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
