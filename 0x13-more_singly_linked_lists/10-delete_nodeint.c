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
 * delete_nodeint_at_index - deletes a node at a given position in a list
 * @head: double pointer to the head node of the list
 * @index: index of the node to delete
 * Return: 1 if successful,
 * or -1 if the list is empty or the node couldn't be deleted
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t len = listint_len(*head);
	listint_t *ptr, *ptr1;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index >= len)
	{
		return (-1);
	}

	if (index == 0)
	{
		ptr = *head;
		(*head) = (*head)->next;
		free(ptr);
		ptr = NULL;
	}
	else
	{
		ptr = *head;
		index--;
		while (index > 0)
		{
			ptr = ptr->next;
			index--;
		}
		ptr1 = ptr->next;
		ptr->next = ptr1->next;
		free(ptr1);
		ptr1 = NULL;
		ptr = NULL;
	}
	return (1);

}
