#include "main.h"

/**
* print_last_digit -> check for the last digit
* Return: return the last digit
* @n: character to check
*/
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
