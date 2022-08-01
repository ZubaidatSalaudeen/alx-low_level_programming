#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns tge length of a string
 * @str: The string
 * Return: length of string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; str++)
		i++;
	return (i);
}

/**
 * _strcpy - copies a string from s2 to s1
 * @s1: The destination
 * @s2: The source string
 * Return: a pointer to the destination string
 */

char *_strcpy(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i]; i++)
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}
/**
 * new_dog - creates a new dog
 * @name: The dog's name
 * @age: its age
 * @owner: its owner
 * Return: The new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
		return (NULL);
	bingo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bingo->name == NULL)
	{
		free(bingo);
		return (NULL);
	}
	bingo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bingo->owner == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	bingo->name = _strcpy(bingo->name, name);
	bingo->age = age;
	bingo->owner = _strcpy(bingo->owner, owner);
	return (bingo);
}
