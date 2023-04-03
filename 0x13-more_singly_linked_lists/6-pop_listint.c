#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns its value
 * @head: double pointer to the head node of the list
 * Return: value of the head node, or 0 if the list is empty
 */
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
	return (num);
}
