#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: Pointer to first element of the linked list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
