#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @key: The key
 * @ht: The hash table you want to add or update the key/value
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	hash_node_t *run = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	run = ht->array[index];
	while (run != NULL)
	{
		if (strcmp(run->key, (char *)key) == 0)
			return (run->value);
		run = run->next;
	}
	return (NULL);
}
