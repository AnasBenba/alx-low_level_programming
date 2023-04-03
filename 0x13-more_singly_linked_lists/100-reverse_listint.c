#include "lists.h"

/**
 * reverse_listint - Reverses a linked list in-place.
 * @head: A pointer to a pointer to the head node of the list.
 *
 * Return: A pointer to the new head node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *ptr1 = NULL;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	while (*head != NULL)
	{
		ptr1 = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = ptr1;
	}
	*head = ptr;
	return (*head);
}
