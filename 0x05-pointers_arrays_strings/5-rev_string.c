#include "main.h"

/**
 * rev_string -> function that reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int len = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	for (int i = (len - 1); i >= (len / 2); i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
