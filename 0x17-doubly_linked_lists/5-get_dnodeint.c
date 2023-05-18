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
 * get_dnodeint_at_index - Returns the node at
 *                         the given index in a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the desired node
 *
 * Return: Pointer to the node at the given index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t len = dlistint_len(head);
	unsigned int i = 0;
	dlistint_t *ptr = head;

	if (index > len)
	{
		return (NULL);
	}

	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
