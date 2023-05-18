#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the elements in a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of the elements in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
