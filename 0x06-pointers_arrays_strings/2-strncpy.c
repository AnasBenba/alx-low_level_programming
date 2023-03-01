#include "main.h"

/**
 * _strncpy -> function that copies a string
 * @dest: pointer to string
 * @src: pointer to string
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
			break;
		}
		i++;
	}
	return (dest);
}
