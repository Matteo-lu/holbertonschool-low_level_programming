#include <stdlib.h>
#include <stdarg.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: Pointer to lists
 *
 * Return: Integer
 */
size_t print_list(const list_t *h);
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
