#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head node of the list
 * @index: index of the node to return
 * Return: pointer to the nth node of the list, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t len = listint_len(head);
	listint_t *ptr;

	if (index >= len)
	{
		return (NULL);
	}

	if (index == 0)
	{
		return (head);
	}
	else
	{
		ptr = head;
		while (index > 0)
		{
			ptr = ptr->next;
			index--;
		}
		return (ptr);
	}
}
