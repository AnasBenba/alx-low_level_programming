#include "lists.h"

/**
 * list_len - returns the number of nodes in a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	int n = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
