#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - prints all the elements of a list_t list
 * @h: Pointer to lists
 *
 * Return: Integer
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
