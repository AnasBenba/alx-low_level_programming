#include "main.h"
#include <stdlib.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * @src: pointer to string
 * @dest: pointer to string
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	while (i < (len + 1))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _strdup -> function that returns a pointer
 *            to a newly allocated space in memory
 * @str: pointer to the string to duplicate.
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int len = 0;
	char *dest = malloc(len + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	if (dest == NULL)
	{
		return (NULL);
	}
	_strcpy(dest, str);
	return (dest);
}
