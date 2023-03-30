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

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be stored in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->str = strdup(str);
	tmp->len = _strlen(str);
	tmp->next = *head;
	*head = tmp;
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		return (*head);
	}
}
