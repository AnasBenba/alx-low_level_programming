#include "lists.h"


listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *ptr1 = NULL;

	if (*head == NULL)
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
