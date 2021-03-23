 #include "lists.h"

/**
 * *get_nodeint_at_index - frees all the elements of a list_t list
 * @head: Pointer to first node
 * @index: times to walk the list
 * Return: Integer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *walk;
	unsigned int i;

	if (head != NULL)
	{
		walk = head;
		for (i = 0; i < index; i++)
		{
			walk = walk->next;
		}
	}
	else
	{
		return (NULL);
	}
	return (walk);
}
