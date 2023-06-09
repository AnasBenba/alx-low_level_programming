#include "hash_tables.h"

/**
 * create - Creates a new hash node with the given key and value
 * @key: The key for the new hash node
 * @value: The value for the new hash node
 *
 * Return: A pointer to the newly created hash node, or NULL on failure
 */
hash_node_t *create(const char *key, const char *value)
{
	hash_node_t *ptr = malloc(sizeof(hash_node_t));
	char *key_dup, *value_dup;

	if (ptr == NULL)
	{
		return (NULL);
	}
	key_dup = strdup(key);
	if (key_dup == NULL)
	{
		return (NULL);
	}
	value_dup = strdup(value);
	if (value_dup == NULL)
	{
		free(key_dup);
		return (NULL);
	}

	ptr->key = key_dup;
	ptr->value = value_dup;

	return (ptr);
}

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add the element to
 * @key: The key of the element
 * @value: The value associated with the key
 *
 * Return: 1 if the element is added successfully, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr, *temp;
	char *value_dup;
	unsigned long int index, i;

	if (key == NULL || ht == NULL || *key == '\0')
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);

	value_dup = strdup(value);
	if (value_dup == NULL)
	{
		return (0);
	}
	i = index;
	temp = ht->array[i];
	while (temp)
	{
		if (!strcmp(temp->key, key))
		{
			free(value_dup);
			free(temp->value);
			temp->value = value_dup;
			return (1);
		}
		temp = temp->next;
	}
	ptr = create(key, value_dup);
	if (ptr == NULL)
	{
		return (0);
	}
	ptr->next = ht->array[index];
	ht->array[index] = ptr;
	return (1);
}
