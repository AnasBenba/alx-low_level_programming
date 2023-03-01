#include "main.h"

/**
 * leet -> function that encodes a string into 1337
 * @s: pointer to string
 * Return: s
 */
char *leet(char *s)
{
	inr i, j;
	char *C = "4433007711";
	char *a = "aAeEoOlLtT";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = C[j];
			}
		}
	}
	return (s);
}
