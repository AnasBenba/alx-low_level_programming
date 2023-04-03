#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a linked list
 * @head: pointer to the head node of the list
 * Return: sum of all the data in the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
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
