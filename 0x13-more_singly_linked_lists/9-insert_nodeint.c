#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @n: Pointer to lists
 * @head: Pointer to the first node
 * @idx: index of the lists where the new node should be added
 * Return: Integer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
		}
		else
		{
			tmp = *head;
			for (i = 0; i < (idx - 1); i++)
			{
				tmp = tmp->next;
				if (tmp == NULL)
				{
					return (NULL);
				}
			}
			if (tmp != NULL)
			{
				new->next = tmp->next;
				tmp->next = new;
			}
		}
	}
	else
	{
		return (NULL);
	}
	return (*head);
}
