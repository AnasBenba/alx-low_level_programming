#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr, *temp;

	if (ht == NULL)
	{
		return;
	}

	i = 0;
	while (i < ht->size)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			temp = ptr;
			ptr = ptr->next;
			if (temp->key != NULL)
			{
				free(temp->key);
			}
			if (temp->value)
			{
				free(temp->value);
			}
			free(temp);
		}
		i++;
	}
	free(ht->array);
}
