#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list
 * @h: Pointer to first element of the linked list
 *
 * Return: Number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
