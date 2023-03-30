#include "lists.h"

/**
 * free_list - frees a list_t linked list
 * @head: pointer to the head node of the list
 *
 * Description: This function frees all the nodes in a linked list,
 * starting from the head node and moving to the end of the list.
 * It does this by using a temporary pointer to hold the current node,
 * freeing the current node, and moving to the next node until the end of
 * the list is reached.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
