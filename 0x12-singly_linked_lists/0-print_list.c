#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the contents of a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("%s\n", "[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		n++;
	}
	return (n);
}
