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
		return (NULL);
	}
	ptr->value = malloc(strlen(value) + 1);
	if (ptr->value == NULL)
	{
		return (NULL);
	}
	ptr->next = NULL;
	strcpy(ptr->key, key);
	strcpy(ptr->value, value);
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
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	if (key == NULL || ht == NULL || *key == '\0')
	{
		return (0);
	}
	ptr = create(key, value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = ptr;
	}
	else
	{
		ptr->next = ht->array[index];
		ht->array[index] = ptr;
	}
	return (1);
}
