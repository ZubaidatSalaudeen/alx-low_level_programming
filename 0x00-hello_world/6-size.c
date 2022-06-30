#include <stdio.h>
/**
 * main -Entry point
 * Description: printing size of various types on the computer
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s%lu%s\n", "Size of a char: ", sizeof(char), " byte(s)");
	printf("%s%lu%s\n", "Size of an int: ", sizeof(int), " byte(s)");
	printf("%s%lu%s\n", "Size of a long int: ", sizeof(long int), " byte(s)");
	printf("%s%lu%s\n", "Size of a long long int: ", sizeof(long long int), " byte(s)");
	printf("%s%lu%s\n", "Size of a float: ", sizeof(float), " byte(s)");
	return (0);
}
