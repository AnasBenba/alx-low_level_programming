#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a
 *                            given position in a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be inserted.
 * @n: The value to be stored in the new node.
 *
 * Return: A pointer to the newly inserted node, or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new;
	unsigned int i = 1;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (i != idx)
	{
		ptr = ptr->next;
		if (ptr == NULL)
		{
			return (NULL);
		}
		i++;
	}
	if (ptr->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = ptr;
	new->next = ptr->next;
	ptr->next->prev = new;
	ptr->next = new;

	return (new);
}
