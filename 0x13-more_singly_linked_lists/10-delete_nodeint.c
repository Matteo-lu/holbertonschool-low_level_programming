#include "lists.h"

/**
 * delete_nodeint_at_index - frees all the elements of a list_t list
 * @head: Pointer to first node
 * @index: index of the node that should deleted
 * Return: Integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prenode;
	unsigned int i;

	if (*head != NULL)
	{
		tmp = *head;
		prenode = *head;
		for (i = 1; i <= index; i++)
		{
			prenode = tmp;
			tmp = tmp->next;
			if (tmp == NULL)
			{
				break;
			}
		}
		if (tmp != NULL)
		{
			if (tmp == *head)
			{
				*head = (*head)->next;
			}
			prenode->next = tmp->next;
			tmp->next = NULL;
			free(tmp);
		}
	}
	else
	{
		return (-1);
	}
	return (1);
}
