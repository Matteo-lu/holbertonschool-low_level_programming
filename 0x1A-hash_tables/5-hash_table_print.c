#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: The hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *run = NULL;
	int item = 0;

	if (ht != NULL)
	{
		printf("{");
		while (index < ht->size)
		{
			run = ht->array[index];
			while (run != NULL)
			{
				if (run->key != NULL)
				{
					if (item == 1)
					{
						printf(", ");
					}
					printf("\'%s\': \'%s\'", run->key, run->value);
				}
				item = 1;
				run = run->next;
			}
			index++;
		}
		printf("}\n");
	}
}
