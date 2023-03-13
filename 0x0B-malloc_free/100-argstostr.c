#include "main.h"
#include <stdlib.h>

/**
 * _memset -> function that fills memory with a constant byte
 * @b: character
 * @s: pointer to string
 * @n: number of bytes to be filled in the memory area
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the number of arguments
 * @av: the array of arguments
 *
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *str, *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	len += ac;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	_memset(str, 0, len * sizeof(char));
	p = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*p++ = av[i][j];
		}
		*p++ = '\n';
	}
	*p = '\0';
	return (str);
}
