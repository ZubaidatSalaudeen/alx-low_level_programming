#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers
 * @n: number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, k;
	
	for (i = 0; i < n / 2; i++)
	{
		j = n - i - 1;
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
