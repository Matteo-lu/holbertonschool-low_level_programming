#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: double pointer to first element of the linked list
 * Return: the address of the new element, or NULL if it failed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	while (head != NULL)
	{
		copy = head->next;
		free(head);
		head = copy;
	}
}
