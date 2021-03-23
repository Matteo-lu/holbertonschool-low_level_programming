#include "lists.h"

/**
 * *add_nodeint - prints all the elements of a list_t list
 * @n: Pointer to lists
 * @head: Pointer to the first node
 * Return: Integer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

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
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = new;
		}
	}
	else
	{
		return (NULL);
	}
	return (*head);
}
