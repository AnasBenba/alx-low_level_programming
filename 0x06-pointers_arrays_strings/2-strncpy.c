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
	int i;

	for (i = 0; i < n; i++)
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
	}
	return (dest);
}
