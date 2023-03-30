#include "lists.h"
#include <string.h>

/**
 * _strlen -> function that returns the length of a string.
 * @s: pointer to a string
 * Return: length of a string
 */
int _strlen(const char *s)
{
	int len = 0;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));
	list_t *ptr;

	if (tmp == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = tmp;
		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		tmp->next = NULL;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		ptr->next = tmp;
	}
	return (*head);
}
