#include "hash_tables.h"

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
