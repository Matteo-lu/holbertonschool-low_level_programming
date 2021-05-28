#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the table
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_table_t *head = NULL;
	unsigned int idx = 0;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = malloc(sizeof(head) * size);
	if (hash_table->array == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	while (idx < size)
	{
		hash_table->array[idx] = NULL;
		idx++;
	}

	return (hash_table);
}
