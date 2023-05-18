#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Pointer to a pointer to the head of the list
 * @n: Value to be assigned to the new node
 *
 * Return: Address of the newly added node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
		{
			return (NULL);
		}
		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		(*head)->prev = new;
		new->next = *head;
		*head = new;
	}
	return (new);
}
