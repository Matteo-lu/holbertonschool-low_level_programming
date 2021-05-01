#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: double pointer to first element of the linked list
 * @index: index of the node, starting from 0
 * Return: the nth node of a linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *copy;
	unsigned int i;

	if (head != NULL)
	{
		copy = head;
		for (i = 0; i < (index - 1); i++)
		{
			copy = copy->next->next;
			if (copy == NULL)
			{
				return (NULL);
			}
		}
	}
	else
	{
		return (NULL);
	}
	return (copy);
}
