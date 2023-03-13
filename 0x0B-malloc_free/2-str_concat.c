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
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	char *dest = malloc(len1 + len2 + 1);

	if (dest == NULL)
	{
		return (NULL);
	}

	_strcpy(dest, s1);
	_strcat(dest, s2);

	return (dest);
}
