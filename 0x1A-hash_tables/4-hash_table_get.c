#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table.
 * @ht: The hash table to look into.
 * @key: The key to search for.
 *
 * Return: The value associated with the element,
 * or NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *ptr;

	if (key == NULL || ht == NULL || *key == '\0')
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];

	if (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			return (ptr->value);
		}
	}
	return (NULL);
}
