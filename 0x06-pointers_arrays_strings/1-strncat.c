#include "main.h"

/**
 * _strncat -> function that concatenates two strings n byte
 * @dest: pointer to string
 * @src: pointer to string
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0,len = 0;

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
