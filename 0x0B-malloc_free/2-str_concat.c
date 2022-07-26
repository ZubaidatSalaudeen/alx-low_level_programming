#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * s3 - The concatenated string
 * Return: a pointer to a newly allocated space in memory
 * which contains the content of s1, followed by s2
 * and returns NULL on failure.
 * if NULK is passed, it it treated as an empty string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, len;
	char *s3;

	k = l = 0;
	if (s1 != NULL)
		for (i = 0; s1[i++] != '\0'; k++);
	if (s2 != NULL)
	{
		for (j = 0; s2[j++] != '\0'; l++);
	}
	len = k + l;
	s3 = (char *)malloc((sizeof(char) * len) + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
		s3[i] = s1[i];
	for (j = 0; j < l; j++, i++)
		s3[i] = s2[j];
	s3[len] = '\0';
	return (s3);
}

