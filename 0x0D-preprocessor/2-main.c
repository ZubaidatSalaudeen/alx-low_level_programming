#include <stdio.h>
/**
 * prints tge name of tge file it was compiled from
 * Return: 0 for success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
