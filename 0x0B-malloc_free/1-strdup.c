#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: The original string
 * Return: A pointer ti the duplicated string 
 * and NULL if str = NULL or insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, j;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	duplicate = (char *)malloc((sizeof(char) * i) + (sizeof(char));
	for (j = 0; j < i; j++)
		duplicate[j] = str[j];
	duplicate[j] = '\0';
	if (duplicate == NULL)
		return (NULL);
	return (duplicate);
}
