#include "lists.h"


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		new->n = n;
		(*head)->prev = new;
		new->next = *head;
		*head = new;
	}
	return (*head);
}
