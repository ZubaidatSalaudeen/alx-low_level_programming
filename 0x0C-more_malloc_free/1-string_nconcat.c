#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: number of chars from s2 to be included
 * Return: a pointer to the concatenated string
 * Or NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i, j, len, len1, len2;
	int newn = n;

	len1 = len2 = 0;
	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++, len1++);
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j] != '\0' && j <= newn; j++, len2++);

	len = len1 + len2;

	s3 = (char *)malloc((len * sizeof(char)) + 1);
	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		s3[i] = s2[j];
	s3[i] = '\0';
	return (s3);
}
