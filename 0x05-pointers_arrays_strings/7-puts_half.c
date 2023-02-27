#include "main.h"

/**
 * puts_half -> function that prints half of a string, followed by a new line
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}
	while (n <= len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
