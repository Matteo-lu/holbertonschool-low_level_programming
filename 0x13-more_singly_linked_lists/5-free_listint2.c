#include "lists.h"

/**
 * free_listint2 - frees all the elements of a list_t list
 * @head: Pointer to first node
 *
 * Return: Integer
 */
void free_listint2(listint_t **head)
{
	listint_t *sig;

	while (*head != NULL)
	{
		sig = (*head)->next;
		free(*head);
		*head = sig;
	}
	*head = NULL;
}
