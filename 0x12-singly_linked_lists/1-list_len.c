#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: The list passed as argument
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
