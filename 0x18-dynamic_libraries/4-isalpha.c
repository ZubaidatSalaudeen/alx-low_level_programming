#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character entered
 * Return: 1 if true
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
