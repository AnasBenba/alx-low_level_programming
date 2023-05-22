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
	dlistint_t *ptr, *new;
	unsigned int i = 0;

	if (h == NULL || *h == NULL)
	{
		return (NULL);
	}
	if (idx > len)
	{
		return (NULL);
	}
	if (idx == 0 || len == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (idx == len)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		ptr = *h;
		while (i < idx - 1)
		{
			ptr = ptr->next;
			i++;
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
}
