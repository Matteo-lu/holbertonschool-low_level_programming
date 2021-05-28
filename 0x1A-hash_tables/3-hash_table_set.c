#include "hash_tables.h"

/**
 * hash_table_set -adds an element to the hash table.
 *
 * @key: The key
 * @ht: The hash table you want to add or update the key/value
 * @value: s the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *node_key_found = NULL;
	unsigned int index = 0;

	if (key == NULL || strlen(key) == 0)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	node_key_found = search_key(key, ht);
	if (node_key_found != NULL)
	{
		free(node_key_found->value);
		node_key_found->value = strdup((char *)value);
		return (1);
	}

	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);
	new_node->next = NULL;

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}

/**
 * search_key - Function to find keys.
 *
 * @key: The key
 * @ht: The hash table you want to add or update the key/value
 *
 * Return: Pointer to node where the key was find
 */
hash_node_t *search_key(const char *key, hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *run = NULL;

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			run = ht->array[index];
			while (run != NULL)
			{
				if (strcmp(key, run->key) == 0)
					return (run);
				run = run->next;
			}
		}
		index++;
	}
	return (NULL);
}
