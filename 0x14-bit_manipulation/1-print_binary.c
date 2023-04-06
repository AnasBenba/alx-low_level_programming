#include "main.h"

/**
 * print_binary - prints the binary representation of an unsigned long int
 * @n: the unsigned long int to print in binary
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8 - 1, flag = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	while (i >= 0)
	{
		if (n & (1ul << i))
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
		i--;
	}
}
