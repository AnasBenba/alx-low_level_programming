#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a doubly linked list.
 * @head: Pointer to a pointer to the head node.
 * @index: Index of the node to delete.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
	{
		return (-1);
	}
	if (tmp->prev != NULL)
	{
		tmp->prev->next = tmp->next;
	}
	if (tmp->next != NULL)
	{
		tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
