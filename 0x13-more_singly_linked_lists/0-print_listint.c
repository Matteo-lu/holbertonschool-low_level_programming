#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: Pointer to lists
 *
 * Return: Integer
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
