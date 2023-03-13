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
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *dest;
	int i = 0;
	int j = 0;

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
	dest = malloc(len1 + len2 + 1);
	if (dest == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	return (dest);
}
