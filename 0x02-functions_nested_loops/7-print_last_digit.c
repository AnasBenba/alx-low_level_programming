#include "main.h"

/**
* print_last_digit -> check for the last digit
* Return: return the last digit
* @n: character to check
*/
int print_last_digit(int n)
{
	int last = 0;
	int i = 0;

	while (i < 1)
	{
		if (n >= 0)
		{
			last = n % 10;
			_putchar(last + '0');
			_putchar(last + '0');
			i++;
		}
		else
		{
			n = n * -1;
			last = n % 10;
			_putchar(last + '0');
			_putchar(last + '0');
			i++;
		}
	}
	return (0);
}
