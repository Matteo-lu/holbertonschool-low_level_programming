 #include "lists.h"

/**
 * sum_listint - frees all the elements of a list_t list
 * @head: Pointer to first node
 *
 * Return: Integer
 */
int sum_listint(listint_t *head)
{
	listint_t *walk;
	int count;

	if (head != NULL)
	{
		count = head->n;
		walk = head;
		while (walk->next != NULL)
		{
			walk = walk->next;
			count += walk->n;
		}
	}
	else
	{
		return (0);
	}
	return (count);
}
