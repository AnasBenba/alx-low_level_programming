#include "main.h"

/**
 * _strchr -> function that locates a character in a string
 * @s: pointer to string
 * @c: character
 * Return: first occurrence of the character c in the string s, or NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}

/**
 * _strspn -> function that gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to string
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p = s;

	while (*p != '\0')
	{
		if (_strchr(accept, *p) == NULL)
		{
			break;
		}
		count++;
		p++;
	}
	if (*accept == '\0')
	{
		return (0);
	}
	return (count);
}
