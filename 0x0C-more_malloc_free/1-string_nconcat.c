#include "main.h"
#include <stdlib.h>

/**
 * _strncat -> function that concatenates two strings n byte
 * @dest: pointer to string
 * @src: pointer to string
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

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
 * string_nconcat - Concatenates two strings up to n bytes of s2
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * @n: The maximum number of bytes of s2 to concatenate
 *
 * Return: A pointer to the concatenated string
 *         If malloc fails, the function returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenS1 = 0, lenS2 = 0;
	char *dest;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[lenS1] != '\0')
	{
		lenS1++;
	}
	while (s2[lenS2] != '\0')
	{
		lenS2++;
	}
	if (n >= lenS2)
	{
		dest = malloc(lenS1 + lenS2 + 1);
		if (dest == NULL)
		{
			return (NULL);
		}
		_strcpy(dest, s1);
		_strncat(dest, s2, lenS2);
	}
	else
	{
		dest = malloc(lenS1 + n + 1);
		if (dest == NULL)
		{
			return (NULL);
		}
		_strcpy(dest, s1);
		_strncat(dest, s2, n);
	}
	return (dest);
}
