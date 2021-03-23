#include "lists.h"

/**
 * listint_len - prints all the elements of a list_t list
 * @h: Pointer to lists
 *
 * Return: Integer
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
