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

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->key = malloc(strlen(key) + 1);
	if (ptr->key == NULL)
	{
		free(ptr);
		return (NULL);
	}
	strcpy(ptr->key, key);

	ptr->value = malloc(strlen(value) + 1);
	if (ptr->value == NULL)
	{
		free(ptr->key);
		free(ptr);
		return (NULL);
	}
	strcpy(ptr->value, value);

	ptr->next = NULL;

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
	hash_node_t *ptr;
	char *value_dup;
	unsigned long int index = key_index((unsigned char *)key, ht->size), i;

	if (key == NULL || ht == NULL || *key == '\0')
	{
		return (0);
	}

	value_dup = strdup(value);
	if (value_dup == NULL)
	{
		return (0);
	}
	i = index;
	while (ht->array[i])
	{
		if (!strcmp(ht->array[i]->key, key))
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_dup;
			return (1);
		}
		i++;
	}
	ptr = create(key, value);
	ptr->next = ht->array[index];
	ht->array[index] = ptr;
	return (1);
}
