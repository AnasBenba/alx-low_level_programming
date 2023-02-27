#include "main.h"

/**
 * rev_string -> function that reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	while (s[i++])
	{
		len++;
	}

	while (i >= (len / 2))
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i--;
	}
}
