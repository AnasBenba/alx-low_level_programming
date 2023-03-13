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


char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	char *dest = malloc(len + 1);

	if (dest)
	{
		_strcpy(dest, str);
	}
	return (dest);
}
