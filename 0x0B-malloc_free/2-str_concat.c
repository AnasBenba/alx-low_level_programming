#include "main.h"
#include <stdlib.h>

/**
 * _memcpy -> function that copies memory area.
 * @dest: pointer to the destination memory block
 * @src: pointer to the source memory block
 * @n: number of bytes from the memory area
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

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

	_memcpy(dest, s1, len1);
	_memcpy(dest + len1, s2, len2 + 1);

	return (dest);
}
