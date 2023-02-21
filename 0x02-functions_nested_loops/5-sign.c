#include "main.h"i

/**
* print_sign -> check for lowercase characters
* Return: return 1 or 0 or -1 depending on condition
* @n: number to check
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
