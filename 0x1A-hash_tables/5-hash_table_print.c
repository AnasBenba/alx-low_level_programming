#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 *
 * Description: Prints the key-value pairs of the hash
 *              table in the order they appear.
 *              The format is: {'key': 'value', 'key': 'value', ...}
 *              If @ht is NULL, nothing is printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *ptr;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	i = 0;
	while (i < ht->size)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ptr->key, ptr->value);
			flag = 1;
			ptr = ptr->next;
		}
		i++;
	}
	printf("}\n");
}
