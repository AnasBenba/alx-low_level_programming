#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
/**
 * insert_nodeint_at_index - inserts a new node at a given position in a list
 * @head: double pointer to the head node of the list
 * @idx: index at which to insert the new node
 * @n: value to store in the new node
 * Return: pointer to the new node, or NULL if it couldn't be inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t len = listint_len(*head);
	listint_t *temp, *ptr;

	if (idx > len + 1)
	{
		return (NULL);
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	ptr = *head;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		idx--;
		while (idx > 0)
		{
			ptr = ptr->next;
			idx--;
		}
		temp->next = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}
