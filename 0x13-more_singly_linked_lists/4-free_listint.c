#include "lists.h"

/**
 * free_listint - frees all the elements of a list_t list
 * @head: Pointer to first node
 *
 * Return: Integer
 */
void free_listint(listint_t *head)
{
	listint_t *sig;

	while (head != NULL)
	{
		sig = head->next;
		free(head);
		head = sig;
	}
}
