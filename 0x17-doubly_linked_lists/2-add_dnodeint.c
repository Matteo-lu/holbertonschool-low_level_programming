#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to first element of the linked list
 * @n: value of int n
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	/* node creation*/
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		(*head)->prev = new;
		new->next = *head;
		*head = new;
	}
	return (new);
}
