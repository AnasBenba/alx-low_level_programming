#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate.
 *
 * Return: pointer to concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len;
	int len1 = 0;
	int len2 = 0;
	char *dest;

	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len = len1 + len2;
	dest = malloc(len + 1);

	_strcpy(dest, s1);
	_strcat(dest, s2);

	if (dest == NULL)
	{
		return (NULL);
	}
	return (dest);
}
