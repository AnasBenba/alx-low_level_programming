#include "main.h"

/**
 * _puts_recursion -> function that prints a string, followed by a new line
 * @s: pointer to string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
