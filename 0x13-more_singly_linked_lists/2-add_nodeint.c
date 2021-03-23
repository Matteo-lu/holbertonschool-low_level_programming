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
			new->next = *head;
			*head = new;
		}
	}
	else
	{
		return (NULL);
	}
	return (*head);
}
