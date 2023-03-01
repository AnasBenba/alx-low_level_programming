#include "main.h"

/**
 * cap_string -> function that capitalizes all words of a string
 * @str: pointer to string
 * Return: str
 */
char *cap_string(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (i < len)
	{
		if (str[i] == '\t')
		{
			str[i] = ' ';
		}
		if (str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '"')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		else if (str[i] == '!' || str[i] == '?' || str[i] == ')' || str[i] == '{')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		else if (str[i] == '(' || str[i] == '}' || str[i] == '\n' || str[i] == ' ')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}
