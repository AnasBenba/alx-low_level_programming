#include "main.h"

/**
 * leet -> function that encodes a string into 1337
 * @s: pointer to string
 * Return: s
 */
char *leet(char *s)
{
	int i, j;
	char C[] = "4433001177";
	char a[] = "aAeEoOlLtT";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = C[j];
			}
		}
	}
	return (s);
}
