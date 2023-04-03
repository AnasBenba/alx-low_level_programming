#include "lists.h"


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
