#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data (n) of a dlistint_t linked list
 * @head: double pointer to first element of the linked list
 * Return: the nth node of a linked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *copy;
	unsigned int i, acum = 0;

	if (head == NULL)
	{
		return (0);
	}
	copy = head;
	acum = copy->n;
	for (i = 0; copy->next != NULL; i++)
	{
		copy = copy->next;
		acum = acum + copy->n;
	}
	return (acum);
}
