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
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0]");
			printf("(nil)\n");
			h = h->next;
		}
		printf("[%d] ", h->len);
		printf("%s\n", h->str);
		h = h->next;
	}
	return (i);
}
