#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * *add_node - prints all the elements of a list_t list
 * @head: Pointer to first node
 * @str: pointer to first member of lists
 * Return: direction of head
 */
list_t *add_node(list_t **head, const char *str)
{

	int i;
	list_t *new;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new = (list_t *)malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = i;
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
