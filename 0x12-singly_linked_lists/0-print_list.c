#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: Pointer to lists
 *
 * Return: Integer
 */
size_t print_list(const list_t *h)
{
	int i, j;

	j = 0;
	if (h->str == NULL)
	{
		j = 1;
		printf("[0]");
		printf("(nil)\n");
		h = h->next;
	}
	for (i = j; h != NULL; i++)
	{
		printf("[%d] ", h->len);
		printf("%s\n", h->str);
		h = h->next;
	}
	return (i);
}
