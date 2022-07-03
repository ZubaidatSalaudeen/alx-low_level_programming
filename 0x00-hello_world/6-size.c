#include <stdio.h>
/**
 * main -Entry point
 * Description: printing size of various types on the computer
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;
	long int li;
	long long int lli;
	float f;

	printf("%s%lu%s\n", "Size of a char: ", sizeof(ch), " byte(s)");
	printf("%s%lu%s\n", "Size of an int: ", sizeof(i), " byte(s)");
	printf("%s%lu%s\n", "Size of a long int: ", sizeof(li), " byte(s)");
	printf("%s%lu%s\n", "Size of a long long int: ", sizeof(lli), " byte(s)");
	printf("%s%lu%s\n", "Size of a float: ", sizeof(f), " byte(s)");
	return (0);
}
