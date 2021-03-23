#include "lists.h"

/**
 * pop_listint - frees all the elements of a list_t list
 * @head: Pointer to first node
 *
 * Return: Integer
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head != NULL)
	{
		tmp = *head;
		i = tmp->n;
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	else
	{
		return (0);
	}
	return (i);
}
