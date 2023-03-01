#include "main.h"

/**
 * string_toupper -> changes all lowercase letters of a string to uppercase
 * @str: pointer to string
 * Return: str
 */
char *string_toupper(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	while (i < len)
	{
		if (str[i] > 90)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
