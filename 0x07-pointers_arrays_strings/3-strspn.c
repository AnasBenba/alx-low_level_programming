#include "main.h"

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
	int i;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				count++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (count);
			}
		}
		s++;
	}
	return (count);
}
