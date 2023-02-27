#include "main.h"

/**
 * print_rev -> function that prints a string in reverse
 * @s: pointer to string
 */
void print_rev(char *s)
{
	char temp;
	int len = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	char a[len];
	int j = len - 1;

	for (int i = 0; i < len; i++)
	{
		a[j] = s[i];
		j--;
	}
	for (int i = 0; i < len; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
