#include "lists.h"

size_t list_len(const list_t *h)
{
	int n = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
