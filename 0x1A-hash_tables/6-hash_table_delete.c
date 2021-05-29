#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: The hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *run = NULL;

	if (ht != NULL)
	{
		while (index < ht->size)
		{
			if (ht->array[index] != NULL)
			{
				run = ht->array[index];
				while (run != NULL)
				{
					ht->array[index] = run->next;
					free(run->key);
					free(run->value);
					free(run);
					run = ht->array[index];
				}
			}
			index++;
		}
		free(ht->array);
		free(ht);
	}
}
