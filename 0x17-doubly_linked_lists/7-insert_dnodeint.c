#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: double pointer to first element of the linked list
 * @idx:  index of the list where the new node should be added
 * @n: value for n;
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *copy;
	unsigned int i;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL)
		*h = new;
	else if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
	}
	else
	{
		copy = *h;
		for (i = 0; i < (idx - 1); i++)
		{
			copy = copy->next;
			if (copy == NULL)
				return (NULL);
		}
		if (copy->next == NULL)
		{
			new->prev = copy;
			copy->next = new;
		}
		else
		{
			new->prev = copy;
			new->next = copy->next;
			copy->next = new;
			copy = copy->next->next;
			copy->prev = new;
		}
	}
	return (new);
}
