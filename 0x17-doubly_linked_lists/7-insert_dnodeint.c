#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
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
	size_t len = dlistint_len(*h);
	dlistint_t *ptr, *ptr1, *new;
	unsigned int i = 0;

	if (idx > len)
	{
		return (NULL);
	}

	if (*h == NULL)
        {
                new = malloc(sizeof(dlistint_t));
                new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
        }

	ptr = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->n = n;
		new->next = *h;
		(*h)->prev = new;
		*h = new;
	}
	else
	{
		while (i < idx - 1)
		{
			ptr = ptr->next;
			i++;
		}
		ptr1 = ptr->next;
		new->n = n;
		ptr->next = new;
		new->next = ptr1;
	}
	return (new);
}
