#include "lists.h"


int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int num;

	if (*head == NULL)
	{
		return (0);
	}

	num = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	ptr = NULL;

	return(num);
}
