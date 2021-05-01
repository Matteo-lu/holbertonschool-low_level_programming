#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 * @head: double pointer to first element of the linked list
 * @index:  is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete, *copy;
	unsigned int i;

	delete = *head;
	copy = *head;
	if (*head != NULL)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(delete);
		}
		if (index > 0)
		{
			for (i = 0; i < (index - 1); i++)
			{
				delete = delete->next;
				copy = copy->next;
				if (copy == NULL)
					return (-1);
			}
			if (copy->next == NULL)
				return (-1);
			else if (copy->next->next == NULL)
			{
				delete = delete->next;
				copy->next = NULL;
			}
			else
			{
				delete = delete->next;
				copy->next = copy->next->next;
				copy = copy->next;
				copy->prev = copy->prev->prev;
			}
		}
		free(delete);
	}
	return (1);
}